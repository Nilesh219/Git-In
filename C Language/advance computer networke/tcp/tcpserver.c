#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>


int main(){
	
	int sock_fd, acc_sockfd;
	struct sockaddr_in server_sock_addr,clinet_sock_addr;	
	int clinet_size=sizeof(clinet_sock_addr);

	char send_data[200],recv_data[100];

	sock_fd=socket(AF_INET,SOCK_STREAM,0);
	

	server_sock_addr.sin_family = AF_INET;
    	server_sock_addr.sin_addr.s_addr = inet_addr("192.168.50.156");
    	server_sock_addr.sin_port = htons(60007);
	
	bind(sock_fd,(struct sockaddr *)&server_sock_addr,sizeof(server_sock_addr));
	
	listen(sock_fd,10);
	
	acc_sockfd=accept(sock_fd,(struct sockaddr *)&clinet_sock_addr,&clinet_size);
	
	recv(acc_sockfd,recv_data,sizeof(recv_data),0);
	printf("Received data is:%s \n",recv_data);
	
	printf("Enter data you want to send\n");
	scanf("%s",send_data);
	send(acc_sockfd,send_data,sizeof(send_data),0);
	

	close(acc_sockfd);

	return 0;
}
