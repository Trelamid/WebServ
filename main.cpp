#include <iostream>
#include "TCPlistener.h"
#include "Config.h"
#include <map>
#include <vector>

using namespace std;

int main(int ac, char** av)
{
	Config config;
	fd_set fdRead;
	fd_set fdWrite;
	int _numSelect = 0;
	TCPlistener listeners[10];
	FD_ZERO(&fdRead);
	FD_ZERO(&fdWrite);

	if(av[1])
		config.Parse(av[1]);
	else
		config.Parse("av[1]");

	for (int i = 0; i < config.GetSize(); i++)
	{
		cout << config.GetPorts(i);
		listeners[i].Init(config.GetPorts(i), &fdRead, &fdWrite);
		int rez = listeners[i].Socket(fdRead);
		_numSelect = rez + 1;
		FD_SET(rez, &fdRead);
	}
	while(1)
	{
		fd_set FdRead = fdRead;
		fd_set FdWrite = fdWrite;
		if(select(_numSelect, &FdRead, &FdWrite, NULL, NULL) < 0)
			continue;
//		cout << "aa";
		for (int i = 0; i < config.GetSize(); i++)
		{
			listeners[i].Listen(fdRead, fdWrite, FdRead, FdWrite, _numSelect);
		}
	}
}
