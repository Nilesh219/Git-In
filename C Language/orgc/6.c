#include<stdio.h>
#include<string.h>
int main(){
    char data[4];

    //input data
    printf("Enter the data = ");
    scanf("%s",&data);

    //even or odd parity condition
    int choice;
    printf("Enter the choice = \n1 Even parity = \n2 Odd parity = \n");
    scanf("%d",&choice);

    int d[4];

    for(int i = 0; i < 4; i++)
    {
        d[i] = (data[i] - 48);
    }

    int hammingcode[7];

    hammingcode[2] = d[0];
    hammingcode[4] = d[1];
    hammingcode[5] = d[2];
    hammingcode[6] = d[3];

    //conditional statment 

    if(choice == 1)
    {
        hammingcode[0] = hammingcode[2] ^ hammingcode[4] ^ hammingcode[6];
        hammingcode[1] = hammingcode[2] ^ hammingcode[5] ^ hammingcode[6];
        hammingcode[3] = hammingcode[4] ^ hammingcode[5] ^ hammingcode[6];
    }
    else if(choice == 2)
    {
        hammingcode[0] = !(hammingcode[2] ^ hammingcode[4] ^ hammingcode[6]);
        hammingcode[1] = !(hammingcode[2] ^ hammingcode[5] ^ hammingcode[6]);
        hammingcode[3] = !(hammingcode[4] ^ hammingcode[5] ^ hammingcode[6]);

    }

    for(int j = 0; j < 7; j++)
    {
        printf("%d ",hammingcode[j]);
    }

    return 0;
}