//
// Created by Prime_Games_2 on 20.07.2022.
//

#ifndef SERVERSCRIPTS_CONFIG_H
#define SERVERSCRIPTS_CONFIG_H

#include "TCPlistener.h"

//using namespace std;

class Config {
private:
	int _ports[10];
	int _size;
public:
	Config();
	Config(const std::string &s);
	~Config();

	void Parse(const std::string &s);
	int GetPorts(int port);
	int GetSize();
};


#endif //SERVERSCRIPTS_CONFIG_H
