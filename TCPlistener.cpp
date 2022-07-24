//
// Created by Prime_Games_2 on 19.07.2022.
//



#include "TCPlistener.h"


TCPlistener::TCPlistener() {}

TCPlistener::TCPlistener(int port = 0, fd_set *fdRead = NULL, fd_set *fdWrite = NULL) : _port(port), _socketFd(0), __fdRead(fdRead), __fdWrite(fdWrite)
{
//	_port = port;
}

TCPlistener::~TCPlistener()
{

}

void TCPlistener::Init(int port, fd_set *fdRead, fd_set *fdWrite)
{
	_port = port;
	__fdRead = fdRead;
	__fdWrite = fdWrite;
//	_epfd = epfd;
}

int  TCPlistener::Socket(fd_set &fdRead)
{
	if((_socketFd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		cout << "socket error\n";
		exit(EXIT_FAILURE);
	}
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("0.0.0.0");
	servAddr.sin_port = htons(_port);

	cout << _socketFd;
	if(bind(_socketFd, (struct sockaddr*)&servAddr, sizeof(servAddr)) < 0)
	{
		perror("bind");
//		cout << "bind error\n";
		exit(EXIT_FAILURE);
	}
	if(listen(_socketFd, 32))
	{
		cout << "listen error\n";
		exit(EXIT_FAILURE);
	}

	int opt;
	setsockopt(_socketFd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

//	FD_SET(_socketFd, &fdRead);
	cout << "Socket OK\n";
	return _socketFd;
}

Request *TCPlistener::Contains(int conFd) //find too
{
	for (int i = 0; i < _connections.size(); i++)
	{
		if(conFd == _connections[i].getFd())
			return &_connections[i];
	}
	return NULL;
}

void TCPlistener::deleteFromYebannyiVector(int conFd)
{
	for (int i = 0; i < _connections.size(); i++)
	{
		if(conFd == _connections[i].getFd())
		{
			_connections.erase(_connections.begin()+i);
			return;
		}
	}
}

void TCPlistener::Listen(fd_set &_fdRead, fd_set &_fdWrite,fd_set &fdRead, fd_set &fdWrite, int &num)
{
//	fd_set fdRead = _fdRead;
//	fd_set fdWrite = _fdWrite;
//	if(select(_numSelect, &fdRead, &fdWrite, NULL, NULL) < 0)
//		return;
	for (int i = 0; i <= num; i++)
	{
		Request *con;
//		cout << "0\n";
		if(FD_ISSET(i, &fdRead) > 0)
		{
//			cout << i<<"\n";
			if(i == _socketFd)
			{
				cout << "2\n";
				socklen_t size = sizeof(servAddr);
				int conFd = accept(_socketFd, (struct sockaddr*)&servAddr, &size);
				if(conFd < 0)
				{
					perror("conFd");
					exit(1);
				}
				FD_SET(conFd, &_fdRead);
				if(conFd > num)
					num = conFd + 1;
				fcntl(conFd, F_SETFL, O_NONBLOCK);
				_connections.push_back(Request(conFd));
//				cout << "2_2\n";
			}
			else if(con = Contains(i))
			{
				cout << "3\n";
				char buf[10000];
				int red = recv(i, buf, 2048, 0);
				string s = buf;
				con->setRequest(s);

				FD_CLR(i, &_fdRead);

				if(red > 0)
					FD_SET(i, &_fdWrite);

				return;
			}
		}
		if(FD_ISSET(i, &fdWrite) > 0 && (con = Contains(i)))
		{
			con->Parse(_port);
			string str2 = con->getResponse();
			send(i, str2.data(), str2.size(), 0);
			FD_CLR(i, &_fdWrite);
			close(i);
			deleteFromYebannyiVector(i);
		}
	}
	return;
/*
//	cout << "server\n";
//	fcntl(_socketFd, F_SETFL, O_NONBLOCK);
	int epWait = epoll_wait(_epfd, events, MAX_EVENTS, -1);
	if(epWait < 0)
	{
		perror("epWait");
		exit(EXIT_FAILURE);
	}
	for (int n = 0; n < epWait; n++)
	{
		if(events[n].data.fd == _socketFd)
		{
			socklen_t size = sizeof(servAddr);
			int conFd = accept(events[n].data.fd, (struct sockaddr*)&servAddr, &size);
			if(conFd < 0)
			{
				perror("conFd");
				exit(1);
			}
			ev.events = EPOLLIN;
			ev.data.fd = conFd;
			char buf[10000];
			int red = read(conFd, buf, 10000);
			string s = buf;
			cout << s;
			if (epoll_ctl(_epfd, EPOLL_CTL_ADD, conFd, &ev) == -1)
			{
				perror("epoll_ctl: conn_sock");
				exit(EXIT_FAILURE);
			}
			fcntl(conFd, F_SETFL, O_NONBLOCK);
			_connections.push_back(conFd);
		}
		else if(events[n].events == EPOLLIN && Contains(events[n].data.fd))
		{
//			int confd = events[n].data.fd;
//			cout << "IN\n" << events[n].data.fd;
			events[n].events = EPOLLOUT;
//			ev.data.fd = events[n].data.fd;

//			epoll_ctl(_epfd, EPOLL_CTL_DEL, events[n].data.fd, &events[n]);
//			ev.events = EPOLLOUT;
//			ev.data.fd = confd;
//			epoll_ctl(_epfd, EPOLL_CTL_ADD, confd, &ev);
			if (epoll_ctl(_epfd, EPOLL_CTL_MOD, events[n].data.fd, &events[n]) == -1)
			{
				perror("epoll_ctl: conn_sock");
				exit(EXIT_FAILURE);
			}
		}
		else if(events[n].events == EPOLLOUT && Contains(events[n].data.fd))
		{
//			cout << "OUT\n" << events[n].data.fd;
			string str2 = "<HTTP/1.1 200 OK \r\n\r\n"
						  "<!doctype html>"
						  "<html lang=\"en\">"
						  "<head>"
						  "<meta charset=\\\"UTF-8\\\"><title>Socket on port "+IntToStr(_port)+"</title>"
						  "<head>"
						  "<body>"
						  "Response:<strong> Tell you from "+IntToStr(_port)+ "</strong>"
						  "</body>\n"
						  "</html>\n";
			send(events[n].data.fd, str2.data(), str2.size(), 0);
//			write(events[n].data.fd, str2.data(), str2.size());
			close(events[n].data.fd);
			deleteFromYebannyiVector(events[n].data.fd);
		}
	}*/
}
