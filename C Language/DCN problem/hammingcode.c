#include<stdio.h>
#include<string.h>

int main()
{
    int data[4];
    printf("Enter the data = ");
    for(int i = 0; i < 4; i++)
    {
        scanf("%d\n",&data[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        printf("%d\n",data[i]);
    }

    
    
    // printf("Enter the data = ");
    // gets(data);

    // char hc[7];

    // hc[2] = data[0];
    // hc[4] = data[1];
    // hc[5] = data[2];
    // hc[6] = data[3];
    
    //     int choice;
    //     printf("Enter The 1] Even parity = \n 2] Odd parity = \n");
    //     scanf("%d",&choice);
    
      
    //     // int choice;
    //     // printf("Enter The 1] Even parity = \n 2] Odd parity = \n");
    //     // scanf("%d",&choice);

    //     switch (choice)
    //     {
    
    //         case 1: 
    //         hc[0] = (hc[2] ^ hc[4] ^ hc[6]);
    //         hc[1] = (hc[2] ^ hc[5] ^ hc[6]);
    //         hc[3] = (hc[4] ^ hc[5] ^ hc[6]);
    //         break;

    //         case 2:
    //         hc[0] = !(hc[2] ^ hc[4] ^ hc[6]);
    //         hc[1] = !(hc[2] ^ hc[5] ^ hc[6]);
    //         hc[3] = !(hc[4] ^ hc[5] ^ hc[6]);
    //         break;

    //         default:
    //         break;
    //     }
    
    // printf("%d ",hc[0]);
    // printf("%d ",hc[1]);
    // printf("%d ",hc[6]);
    // printf("%d ",hc[3]);
    // printf("%d ",hc[4]);
    // printf("%d ",hc[5]);
    // printf("%d ",hc[6]);
    // int size = 7;
    // for(int i = 0; i < size; i++)
    // {
    //     printf("%d ",hc[i]);
    // }
    
    // for(int i = 0; i <= 7; i++)
    // {
    //     printf("%d",&hc[i]);
    // }
    return 0;
}