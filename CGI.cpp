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
		char *s;
		while(fread((void *)s, 1, 1, temp) == 0)
		{
//			std::cout << temp->_base;
		}
		file = temp;
	}
}

void CGI::craft_response(Request &client) {
	char *s;
	fread((void *)s, 1, 1000, file);
	std::string response (
			"<HTTP/1.1 200 OK \r\n\r\n"
			"<html>"
			"<head>"
			"</head>"
			"<body>");
			response += s;
			response +="</body></html>\r\n\r\n";
	client.setResponse(response);
//	std::fstream file;
//	file.open(path, std::fstream::app);
//	file << response;
//	file.close();

//	std::string line;
//
//	client.setResponse("Server: WebServ/1.0\r\n" + getDateHeader());
//	std::string _status = "200";
	/*client.file.open(file);

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
	//*   std::cerr << st.st_size - client.file.tellg() << std::endl;*/
//	std::stringstream header;
//	//1- first line : HTTP/1.1 status msg
//	header << "HTTP/1.1 " << _status << " " << ws::Response::getMessage(_status)
//		   << "\r\n";
//	//2- Server: WebServ/1.0\r\n + date + cgi header.
//	header << client.buffer;
//	//   std::cerr << GREEN << "Buffer : " << client.buffer << "\n Is python : " << is_python << RESET << std::endl;
//	//   	header << "Content-Type: text/html" << "\r\n";
//	//2- Content-Length.
//	header << "Content-Length: " << st.st_size - client.file.tellg() << "\r\n";
//	header << "\r\n";
//	//TODO
//	//   std::cerr << RED << " The headers : \n" <<  header.str() << RESET << std::endl;
//	client.buffer = header.str();
}

std::string CGI::getDateHeader()
{
	time_t curr_time;
	struct tm *tm;
	std::string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	std::string months[] = {"Jan", "Feb", "MAar", "Apr", "May", "Jun",
							"Jul", "Aug", "Sep",  "Oct", "Nov", "Ded"};
	// Mon, 06 Jun 2022 03:48:42 GMT
	time(&curr_time);
	tm = gmtime(&curr_time);
	std::stringstream date;
	date << days[tm->tm_wday].c_str() << ", " << std::setw(2) << std::setfill('0')
		 << tm->tm_mday;
	date << " " << months[tm->tm_mon].c_str() << " " << tm->tm_year + 1900 << " ";
	date << std::setw(2) << std::setfill('0') << (tm->tm_hour + 1) % 24 << ":"
		 << std::setw(2) << std::setfill('0') << tm->tm_min << ":" << std::setw(2)
		 << std::setfill('0') << tm->tm_sec << " GMT+1";
	return ("Date: " + date.str() + "\r\n");
}

bool CGI::is_finished(Request &client) {
	craft_response(client);
	return true;
//	return false;
}
