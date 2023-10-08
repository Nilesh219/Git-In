#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void even(char output[], int count)
{
    if(count % 2 == 0 )
    {
        strcat(output,"0");
        printf("%s\n",output);
    }
    else
    {
        strcat(output,"1");
        printf("%s\n",output);
    }
}
void Odd(char output[], int count)
{
    if(count % 2 == 0)
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
int main(){
    char input[16];
    char output[16];
    char one = '1';
    // char output[5];
    //get it input in string
    printf("enter data = ");
    scanf("%s",input);
    strcpy(output,input);
    int count = 0;
    while(1)
    {
        for(int i = 0; i < 8; i++)
        {
            if(input[i] == one)
            {
                count++;
                
            }
        
        }
        //  printf("Numbers of ones = %d",count);

        int choice;
        printf("Enter the data = \n1 even = \n2 Odd = \n3 exit = \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                even(output,count);
            break;
            case 2: 
                Odd(output,count);
            break;
            case 3: exit(1);
            default: printf("Invaild Output");   
        }

    }    
    
    Odd(output,count);
    return 0;
}