//
// Created by Prime_Games_2 on 25.08.2022.
//

#include "CGI.h"

CGI::CGI() {

}

CGI::~CGI()
{
	fclose(file);
}

void CGI::cgi(RequestParser request, std::string cgiPath, std::string script_path)
{
	char *args[3];
	args[0] = (char *)cgiPath.data();
	args[1] = (char *)script_path.data();
	args[2] = NULL;

	FILE *temp = tmpfile();
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
		dup2(temp->_file, 1);
		execve(args[0], args, request.getEnvp());
	}
	else
	{
		while(temp->_base == "")
		{

		}
		file = temp;
	}
}

void CGI::craft_response(Request &client) {
	/*std::string line;

	client.setResponse("Server: WebServ/1.0\r\n" + getDateHeader());
	std::string _status = "200";
	client.file.open(file);

	for (; std::getline(client.file, line);)
	{
		if (line.empty() || line == "\r")
			break;
		if (strncasecmp("Status:", line.c_str(), 7) == 0)
		{
			std::string::iterator it = line.begin() + 7;
			while (*it == ' ')
				++it;
			_status = std::string(it, std::find(it, line.end(), ' '));
		}
		else
		{
			client.buffer += line + "\n";
		}
	}
	if (line.empty())
	{
		cgi_internal_error(client, "502");
		return;
	}
	//* I may need to check if I have content type header or not here!
	struct stat st;
	if (stat(this->file.c_str(), &st) == -1)
		return cgi_internal_error(client, "500");
	//*   std::cerr << st.st_size - client.file.tellg() << std::endl;
	std::stringstream header;
	//1- first line : HTTP/1.1 status msg
	header << "HTTP/1.1 " << _status << " " << ws::Response::getMessage(_status)
		   << "\r\n";
	//2- Server: WebServ/1.0\r\n + date + cgi header.
	header << client.buffer;
	//   std::cerr << GREEN << "Buffer : " << client.buffer << "\n Is python : " << is_python << RESET << std::endl;
	//   	header << "Content-Type: text/html" << "\r\n";
	//2- Content-Length.
	header << "Content-Length: " << st.st_size - client.file.tellg() << "\r\n";
	header << "\r\n";
	//TODO
	//   std::cerr << RED << " The headers : \n" <<  header.str() << RESET << std::endl;
	client.buffer = header.str();*/
}

bool CGI::is_finished(Request &client) {
	craft_response(client);
	return true;
//	return false;
}
