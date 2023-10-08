#include<stdio.h>
#include<string.h>
int main(){
    
    char Ip[16];
    int o1, o2, o3, o4;
    //input 
    printf("Enter Ip Address = ");
    scanf("%s",Ip);
    printf("Your Ip Adress = %s\n",Ip);
    sscanf(Ip,"%d.%d.%d.%d",&o1, &o2, &o3, &o4);
    
    if((o2 <= 0 || o2 > 255) || (o3 <= 0 || o3 > 255) || (o4 <= 0 || o4 > 255))
    {
        printf("Invalid Ip Address ");
    }
    else if ((o1 >= 0) && (o1 < 128))
    {
        printf("IP Address class = A");
        printf("IP Address Net Id = %d.0.0.0",o1);
        printf("IP Address Host Id = 0.%d.%d.%d",o2,o3,o4);
    }
    else if ((o2 >= 128) && (o2 < 192))
    {
        printf("IP Address class = B");
        printf("IP Address Net Id = %d.%d.0.0",o1,o2);
        printf("IP Address Host Id = 0.0.%d.%d",o3,o4);
    }
    else if ((o3 >= 192) && (o1 < 224))
    {
        printf("IP Address class = C");
        printf("IP Address Net Id = %d.%d.%d.0",o1,o2,o3);
        printf("IP Address Host Id = 0.0.0.%d",o4);
    }
    else if ((o1 >= 224) && (o1 < 240))
    {
        printf("IP Address class = D");
        printf("IP Address is no Net Id and Host Id \n it is used for multicast purposes");
       
    }
    else if ((o1 >= 224) && (o1 < 256))
    {
        printf("IP Address class = E");
        printf("IP Address is no Net Id and Host Id \n it is Reserved for future use");
       
    }
    else
    {
        printf("Invaild Ip Address");
    }
}