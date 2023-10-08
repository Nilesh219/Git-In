#include<stdio.h>
#include<string.h>
int main()
{
    char IP[16];
    int o1,o2,o3,o4;

    printf("Enter the Ip address = ");
    scanf("%s",IP);
    printf("You Entered IP Adress = %s\n",IP);

    sscanf(IP,"%d.%d.%d.%d",&o1,&o2,&o3,&o4);

    if(((o2 < 0) || (o2 > 255)) || ((o3 < 0) || (o3 > 255)) || ((o4 < 0 ) || (o4 > 255)))
    {
        printf("Invail IP Address\n");
    }

    else if((o1 >= 0) && (o1 < 128))
    {
        printf("IP Address class = A\n");
        printf("NetId = %d.0.0.0\n",o1);
        printf("HostId = %d.%d.%d.0\n",o1,o2,o3);
    }

    else if((o1 >= 128) && (o1 < 192))
    {
        printf("IP Address class = B\n");
        printf("NetId = %d.%d.0.0\n",o1,o2);
        printf("HostId = 0.0.%d.%d\n",o3,o4);
    }

    else if((o1 >= 192) && (o1 < 224))
    {
        printf("IP Address class = C\n");
        printf("NetId = %d.%d.%d.0\n",o1,o2,o3);
        printf("HostId = 0.0.0.%d\n",o4);
    }

    else if((o1 >= 224) && (o1 < 240))
    {
        printf("IP Address class = D\n");
        printf("D class IP Address no NetId & HostId\n It is Used for multiboard cast\n");

    }

    else if((o1 >= 240) && (o1 < 256))
    {
        printf("IP Address class = E\n");
        printf("E class has No NetId & HostId\n it is Resreved by futuren uses\n");
         
    }
    else
    {
        printf("Ip Address is Invaild");
    }
    
    return 0;
}