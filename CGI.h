//
// Created by Prime_Games_2 on 25.08.2022.
//

#ifndef NEW_WEBSERV_CGI_H
#define NEW_WEBSERV_CGI_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <map>
#include "RequestParser.hpp"
#include "Request.hpp"
#include "Config.hpp"
#include "Server.hpp"
#include "Location.hpp"
#include <vector>
#include <iterator>
#include <ctime>
#include <fcntl.h>
#include <cstdio>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>

class RequestParser;
class Location;
class Request;

class CGI {
private:
//	std::map<std::string, std::string>	_env;
	FILE								*file;
//	int									_pid;
//	std::string							_status;
//	bool								finished;
public:
	CGI();
	~CGI();
	void cgi(RequestParser request, std::string  cgiPath, std::string  fullpath);
	void craft_response(Request &client);
	bool is_finished(Request &client);

};


#endif //NEW_WEBSERV_CGI_H
