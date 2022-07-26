//
// Created by Prime_Games_2 on 20.07.2022.
//

#include "Config.h"

Config::Config() {}

Config::Config(const std::string &s)
{
//	this->ports = new int[10];
}
Config::~Config()
{
//	delete[] this->ports;
}

void Config::Parse(const std::string &s)
{
	_ports[0] = 4242;
//	_ports[1] = 8080;
//	_ports[2] = 2121;
	_size = 1;
}

int Config::GetPorts(int port)
{
	return _ports[port];
}

int Config::GetSize()
{
	return _size;
}