#include <iostream>
#include "TCPlistener.h"
#include "Config.h"
#include <map>

using namespace std;

int main(int ac, char** av)
{
	Config config;
	TCPlistener listeners[10];
//	map<int, int> readSock;
//	map<int, int> readSock;

	if(av[1])
		config.Parse(av[1]);
	else
		config.Parse("av[1]");

	int epfd = epoll_create(10);
	for (int i = 0; i < config.GetSize(); i++)
	{
		cout << config.GetPorts(i);
		listeners[i].Init(config.GetPorts(i), epfd);
		listeners[i].Socket();
	}
	while(1)
	{
		for (int i = 0; i < config.GetSize(); i++)
		{
			listeners[i].Listen();
		}
	}
}
