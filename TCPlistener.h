//
// Created by Prime_Games_2 on 19.07.2022.
//
#include "Request.h"
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
#include <sys/select.h>
//#include <sys/event.h>


#ifndef SERVERSCRIPTS_TCPLISTENER_H
#define SERVERSCRIPTS_TCPLISTENER_H
#define MAX_EVENTS 10

class Request;

using namespace std;

class TCPlistener {
private:
	int						__port;
	int						__socketFd;
	struct sockaddr_in		__servAddr;
	map<int, Request>		__connections;
public:
	TCPlistener(int port);
	TCPlistener();
	~TCPlistener();
	void Init(int port);
	int Socket(fd_set &fdRead);
	void Listen(fd_set &_fdRead, fd_set &_fdWrite,fd_set &fdRead, fd_set &fdWrite, int &num);
};


#endif //SERVERSCRIPTS_TCPLISTENER_H
