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


//the main function
int main()
{
	//essential variables
	int socket_fd, accept_fd, port_no;
	socklen_t client_addr_size;
	int rw_retval;
	char buffer[256];
	struct sockaddr_in server_addr, client_addr; 

	return 0;
}
