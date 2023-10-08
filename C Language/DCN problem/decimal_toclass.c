#include<stdio.h>


int main()
{
    char IP[16];
    int o1, o2, o3, o4;

    printf("enter IP address\n");
    scanf("%s", IP);
    printf("you entered = %s\n", IP);

    sscanf(IP, "%d.%d.%d.%d", &o1, &o2, &o3, &o4);
    //printf("%d %d %d %d\n", o1,o2,o3,o4);
    
    if ((o2 < 0 || o2 > 255) || (o3 < 0 || o3 > 255) || (o4 < 0 || o4 > 255))
    {
        printf("IP address is invalid\n");
    }
    
    else if((o1 >= 0) && (o1 < 128))
    {
        printf("***class is A\n");
        printf("***Network ID = %d.0.0.0\n", o1);
        printf("***Host ID = 0.%d.%d.%d\n", o2, o3, o4);
    }

    else if((o1 >= 128) && (o1 < 192))
    {
        printf("***class is B\n");
        printf("***Network ID = %d.%d.0.0\n", o1, o2);
        printf("***Host ID = 0.0.%d.%d\n", o3, o4);
    }

    else if((o1 >= 192) && (o1 < 224))
    {
        printf("***class is C\n");
        printf("***Network ID = %d.%d.%d.0\n", o1, o2, o3);
        printf("***Host ID = 0.0.0.%d\n", o4);
    }

    else if((o1 >= 224) && (o1 < 240))
    {
        printf("***class is D\n");
        printf("There is no Net ID or Host ID\n Used for multicast purposes\n"); 
    }

    else if((o1 >= 240) && (o1 < 256))
    {
        printf("***class is E\n");
        printf("There is no Net ID or Host ID\n Reserved for future use\n");
    }

    else
    {
        printf("IP address is INVALID\n");
    }

    return 0;
}
