#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>


int main(){
	
	int sock_fd;
	struct sockaddr_in server_sock_addr,clinet_sock_addr;	
	int clinet_size=sizeof(clinet_sock_addr);

	char send_data[200],recv_data[100];

	sock_fd=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	

	server_sock_addr.sin_family = AF_INET;
    	server_sock_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    	server_sock_addr.sin_port = htons(60000);
	
	bind(sock_fd,(struct sockaddr *)&server_sock_addr,sizeof(server_sock_addr));
	
	listen(sock_fd,10);
	
	//acc_sockfd=accept(sock_fd,(struct sockaddr *)&clinet_sock_addr,&clinet_size);
	
	recvfrom(sock_fd,recv_data,sizeof(recv_data),0,(struct sockaddr *)&clinet_sock_addr,&clinet_size);
	printf("Received data is:%s \n",recv_data);
	
	printf("Enter data you want to send\n");
	scanf("%s",send_data);
	sendto(sock_fd,send_data,sizeof(send_data),0,(struct sockaddr *)&clinet_sock_addr,clinet_size);
	


	return 0;
}
