//
// Created by Prime_Games_2 on 19.07.2022.
//

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <time.h>
#include <sys/epoll.h>
#include <cstring>
#include <sstream>
#include <map>
#include <vector>
//#include <sys/event.h>


#ifndef SERVERSCRIPTS_TCPLISTENER_H
#define SERVERSCRIPTS_TCPLISTENER_H
#define MAX_EVENTS 10

using namespace std;

class TCPlistener {
private:
	int					_port;
	int					_socketFd;
	int					_epfd;
	struct sockaddr_in	servAddr;
	struct epoll_event ev, events[MAX_EVENTS];
	vector<int>			_connections;
	bool Contains(int confd);
	void deleteFromYebannyiVector(int confd);
public:
	TCPlistener(int port, int epfd);
	TCPlistener();
	~TCPlistener();
	void Init(int port, int epfd);
	void Socket();
	void Listen();
};


#endif //SERVERSCRIPTS_TCPLISTENER_H
