#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>


int main(){
	
	int client_sock_fd;
	struct sockaddr_in server_sock_addr,clinet_sock_addr;	
	int server_size=sizeof(server_sock_addr);

	char send_data[200],recv_data[100];

	client_sock_fd=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	

	server_sock_addr.sin_family = AF_INET;
    	server_sock_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    	server_sock_addr.sin_port = htons(60000);
	
	printf("Enter data you want to send\n");
	scanf("%s",send_data);
	sendto(client_sock_fd,send_data,sizeof(send_data),0,(struct sockaddr *)&server_sock_addr,sizeof(server_sock_addr));


	
	recvfrom(client_sock_fd,recv_data,sizeof(recv_data),0,(struct sockaddr *)&server_sock_addr,&server_size);
	printf("Received data is:%s \n",recv_data);
	

	


	return 0;
}
