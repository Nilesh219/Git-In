#include<stdio.h>
int main()
{
    int hammingcode[7];
    char hc[8];
    int parity, parity_1, parity_2, parity_4,sum = 0;
    printf("Enter the hammingcode =");
    gets(hc);

    for(int i = 0; i < 7; i++)
    {
        hammingcode[i] = hc[i] - 48;
    }

    printf("Enter parity \n0 = even\n1 = odd");
    scanf("%d",&parity);

    printf("your data is %d%d%d%d\n",hammingcode[2],hammingcode[4],
    hammingcode[5],hammingcode[6]);

    if(parity == 0)
    {
        parity_1 = hammingcode[2] ^ hammingcode[4] ^ hammingcode[6];

        parity_2 = hammingcode[2] ^ hammingcode[5] ^ hammingcode[6];

        parity_4 = hammingcode[4] ^ hammingcode[5] ^ hammingcode[6];

        if(parity_1 == hammingcode[0])
        {
            printf("parity 1 is correct\n");
        }
        else
        {
            sum = sum+1;
        }

        if(parity_2 == hammingcode[1])
        {
            printf("parity 2 is correct\n");
        }
        else
        {
            sum = sum+2;
        }
        if(parity_4 == hammingcode[3])
        {
            printf("parity 4 is correct\n");
        }
        else
        {
            sum = sum+4;
        }
    
    }
    else if(parity == 1)
    {
        parity_1 = !(hammingcode[2] ^ hammingcode[4] ^ hammingcode[6]);

        parity_2 = !(hammingcode[2] ^ hammingcode[5] ^ hammingcode[6]);

        parity_4 = !(hammingcode[4] ^ hammingcode[5] ^ hammingcode[6]);

        if(parity_1 == hammingcode[0])
        {
            printf("parity 1 is correct\n");
        }
        else
        {
            sum = sum+1;
        }

        if(parity_2 == hammingcode[1])
        {
            printf("parity 2 is correct\n");
        }
        else
        {
            sum = sum+2;
        }
        if(parity_4 == hammingcode[3])
        {
            printf("parity 4 is correct\n");
        }
        else
        {
            sum = sum+4;
        } 
    }   

    else
    {
        printf("Enter proper inputs\n");
    }
    if (sum != 0)
    {
        printf("%d th bit is incorrect\n");
    }
    else
    {
        printf("your hamming code is correct\n");
    }
    return 0;
}