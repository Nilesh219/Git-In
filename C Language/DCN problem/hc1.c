#include<stdio.h>
#include<string.h>
int main()
{
    int d[4];
    printf("Enter the data = ");
    scanf("%d %d %d %d ",&d[0], &d[1], &d[2], &d[3]);
    printf("%d %d %d %d ",d[0], d[1], d[2], d[3]);
    int p[3];
    scanf("%d %d %d ",&p[0],&p[1],&p[3]);
    p[0] = d[2] ^ d[4] ^ d[6];
    p[1] = d[2] ^ d[5] ^ d[6];
    p[2] = d[4] ^ d[5] ^ d[6];
    printf("%d %d %d ",p[0],p[1],p[3]);
    

    int hc[7];
    scanf("%d %d %d %d %d %d %d ",&hc[0],&hc[1],&hc[2],&hc[3],&hc[4],&hc[5],&hc[6]);
    hc[0] = p[0];
    hc[1] = p[1];
    hc[2] = d[0];
    hc[3] = p[2];
    hc[2] = d[1];
    hc[2] = d[2];
    hc[2] = d[3];
    printf("%d %d %d %d %d %d %d ",hc[0], hc[1], hc[2], hc[3], hc[4], hc[5], hc[6]);
    


    // scanf("%d %d %d ",&hc[0],&hc[1],&hc[3]);
    // printf("%d %d %d %d %d %d %d ",hc[0],hc[1],hc[2],hc[3],hc[4],hc[5],hc[6]);
    // int choice;
    // printf("Enter The 1] Even parity = \n 2] Odd parity = \n");
    // scanf("%d",&choice);

    // switch (choice)
    // {
    
    //     case 1: 
    //         hc[0] = (hc[2] ^ hc[4] ^ hc[6]);
    //         hc[1] = (hc[2] ^ hc[5] ^ hc[6]);
    //         hc[3] = (hc[4] ^ hc[5] ^ hc[6]);
    //     break;

    //     case 2:
    //         hc[0] = !(hc[2] ^ hc[4] ^ hc[6]);
    //         hc[1] = !(hc[2] ^ hc[5] ^ hc[6]);
    //         hc[3] = !(hc[4] ^ hc[5] ^ hc[6]);
    //     break;

    //     default:
    //     break;
    // }

    

    


    return 0;
}