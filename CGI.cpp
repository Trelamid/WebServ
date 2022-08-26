
#include "CGI.hpp"
#include "Request.hpp"

CGI::CGI()
{

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
		char *s = NULL;
		while(fread((void *)s, 1, 1, temp) == 0)
		{
//			std::cout << temp->_base;
		}
		file = temp;
	}
}

void CGI::craft_response(Request &client)
{
	char *s = NULL;
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
