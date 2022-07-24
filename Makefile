all:
	@g++ -g main.cpp TCPlistener.cpp Config.cpp Request.cpp -o server