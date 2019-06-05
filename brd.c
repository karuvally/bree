//bree daemon, alpha release
//Copyright 2019, Aswin Babu Karuvally

//include all the essential files
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>


void error(const char *message)
{
	perror(message);
	exit(1);
}


//the main function
int main(int args_count, char *args[])
{
	//essential variables
	int socket_fd, accept_fd, port_no;
	socklen_t client_addr_size;
	int rw_retval;
	char buffer[256];
	struct sockaddr_in server_addr, client_addr;

	//create the socket
	socket_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_fd < 0)
		error("ERROR opening socket!");

	//set the value of server address to zero 
	bzero((char *) &server_addr, sizeof(server_addr));

	//get port number, convert it to int
	port_no = atoi(argv[1]);

	//setup the server address
	server_addr.sin_family = AF_INET;

	close(socket_fd);
	return 0;
}
