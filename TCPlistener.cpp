//
// Created by Prime_Games_2 on 19.07.2022.
//

#include "TCPlistener.h"

std::string IntToStr(int x) {
	std::stringstream ss;
	ss << x;
	return ss.str();
}

TCPlistener::TCPlistener() {}

TCPlistener::TCPlistener(int port, int epFd) : _port(port), _socketFd(0), _epfd(epFd)
{
//	_port = port;
}

TCPlistener::~TCPlistener()
{

}

void TCPlistener::Init(int port, int epfd) {
	_port = port;
	_epfd = epfd;
}

void TCPlistener::Socket() {
	if((_socketFd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		cout << "socket error\n";
		exit(EXIT_FAILURE);
	}


	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	servAddr.sin_port = htons(_port);

	cout << _socketFd;
	if(bind(_socketFd, (struct sockaddr*)&servAddr, sizeof(servAddr)) < 0)
	{
		perror("");
		cout << "bind error\n";
		exit(EXIT_FAILURE);
	}
	if(listen(_socketFd, 10))
	{
		cout << "listen error\n";
		exit(EXIT_FAILURE);
	}


//	struct epoll_event ev, events[MAX_EVENTS];
	ev.events = EPOLLIN;
	ev.data.fd = _socketFd;
	if (epoll_ctl(_epfd, EPOLL_CTL_ADD, _socketFd, &ev) == -1) {
		perror("epoll_ctl");
		exit(EXIT_FAILURE);
	}
	cout << "Socket OK\n";
}

bool TCPlistener::Contains(int conFd)
{
	for (int i = 0; i < _connections.size(); i++)
	{
		if(conFd == _connections[i])
			return true;
	}
	return false;
}

void TCPlistener::deleteFromYebannyiVector(int conFd)
{
	for (int i = 0; i < _connections.size(); i++)
	{
		if(conFd == _connections[i])
		{
			_connections.erase(_connections.begin()+i);
			return;
		}
	}
}

void TCPlistener::Listen() {
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
			ev.events = EPOLLOUT;
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
			_connections.push_back(conFd);
		}
		else if(events[n].events == EPOLLOUT && Contains(events[n].data.fd))
		{
//			string str = "HTTP/1.1 200 OK \r\n\r\n Hello from " + IntToStr(_port);
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
			write(events[n].data.fd, str2.data(), str2.size());
			close(events[n].data.fd);
			deleteFromYebannyiVector(events[n].data.fd);
		}
	}
}
