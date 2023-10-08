#include<stdio.h>
#include<string.h>
int main(){
    char input[40];
    char output[60];
    char flag[9] = "01111110";

    //input
    printf("Enter input = ");
    scanf("%s",&input);

    //copy the string 
    strcpy(output,flag);

    //input No. of 5 conjuctive'1' condition
    int i = 0, j = 8;
    while(input[i] != '\0')
    {
        if((input[i] == '1') && (input[i+1] == '1') && (input[i+2] == '1') && (input[i+3] == '1') && (input[i+4] == '1') )
        {
            output[j] = input[i];
            output[j+1] = input[i+1];
            output[j+2] = input[i+2];
            output[j+3] = input[i+3];
            output[j+4] = input[i+4];
            output[j+5] = '0';

            i = (i+5);
            j = (i+6);
        }
        else
        {
            output[j] = input[i];
            i++;
            j++;
        }
       
        
    }
     //last flag output
        strcat(output,flag);

        //print output
        printf("output = %s\n",output);

    return 0;
}