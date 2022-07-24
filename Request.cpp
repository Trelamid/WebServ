//
// Created by Prime_Games_2 on 24.07.2022.
//

#include "Request.h"

std::string IntToStr(int x) {
	std::stringstream ss;
	ss << x;
	return ss.str();
}


Request::Request(int fd)	{__fd = fd; __request = "";	__response = "";}

Request::Request()	{__fd = 0; __request = ""; __response = "";}

Request::~Request(){}

int Request::getFd()	{return __fd;}

void Request::setRequest(const std::string request)	{__request = __request + request;}

std::string Request::getResponse()	{return __response;}

void Request::setResponse(const std::string response)	{__response = response;}

void Request::Parse(int port) //port временно
{
	__response = "<HTTP/1.1 200 OK \r\n\r\n"
				 "<!doctype html>"
				 "<html lang=\"en\">"
				 "<head>"
				 "<meta charset=\\\"UTF-8\\\"><title>Socket on port "+IntToStr(port)+"</title>"
																					  "<head>"
																					  "<body>"
																					  "Response:<strong> Tell you from "+IntToStr(port)+ "</strong>"
																																		  "</body>\n"
																																		  "</html>\n";
}