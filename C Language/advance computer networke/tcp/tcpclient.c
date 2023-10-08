#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>


int main(){
	
	int client_sock_fd;
	struct sockaddr_in server_sock_addr;	

	char send_data[200],recv_data[100];

	client_sock_fd=socket(AF_INET,SOCK_STREAM,0);
	

	server_sock_addr.sin_family = AF_INET;
    	server_sock_addr.sin_addr.s_addr = inet_addr("192.168.50.147");
    	server_sock_addr.sin_port = htons(60007);
	
	connect(client_sock_fd,(struct sockaddr *)&server_sock_addr,sizeof(server_sock_addr));
	
	printf("ENter data you want to send\n");
	scanf("%s",send_data);
	send(client_sock_fd,send_data,sizeof(send_data),0);
	
	
	recv(client_sock_fd,recv_data,sizeof(recv_data),0);
	printf("The send data is:%s\n",recv_data);

	close(client_sock_fd);

	return 0;
}
