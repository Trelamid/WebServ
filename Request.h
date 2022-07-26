//
// Created by Prime_Games_2 on 24.07.2022.
//

#ifndef SERVERSCRIPTS_REQUEST_H
#define SERVERSCRIPTS_REQUEST_H

#include <iostream>
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

class Request {
private:
	std::string __request;
	std::string __response;
	int			__fd;
public:
	Request();
	Request(int fd);
	~Request();
	int getFd();
	void setRequest(const std::string request);
	void setResponse(const std::string response);
	std::string getResponse();
	std::string getRequest();
	std::string PreParsing(const std::string preRequest);
	void Parse(int port);
};


#endif //SERVERSCRIPTS_REQUEST_H
