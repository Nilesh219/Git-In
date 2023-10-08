#include<stdio.h>
#include<string.h>

// Parity cheking 
//input 
//two function check parity even and odd
//otuput
int Even(char output[], int count)
{
    if(count%2 == 0)
    {
        strcat(output,"1");
        printf("%s\n",output);
    }
    else
    {
        strcat(output,"0");
        printf("%s\n",output);
    }
}
int Odd(char output[], int count)
{
    if (count%2 == 0)
    {
        strcat(output, "0");
        printf("%s\n",output);  
    }
    else
    {
       strcat(output, "1");
       printf("%s\n",output);
    }
    
}
int main()
{
    char input[16], output[16], one = '1';
    int count = 0;
    while(1)
    {
        printf("Enter the input = ");
        scanf("%s",input);
        strcpy(output, input);
        for(int i = 0; i<8; i++)
        {
            if(input[i] == one)
            {
                count++;
            }

        }
        int choice;
        printf("Enter 1]Even Parity\n 2]Odd Parity\n 3]To Exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1: Even(output,count);
                break;

            case 2: Odd(output,count);
                break; 

            case 3: exit(1);      
                break;
            default: printf("Invalid Output");
        }   


    }
   

}
