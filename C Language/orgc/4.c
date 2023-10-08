#include<stdio.h>
#include<string.h>
void shift(char array[], int position, int* size)
{
    for(int i = (*size-1); i >= position; i--)
    {
        array[i+1] = array[i];
    }
    array[position] = '0';
    size++;
}
int main(){
    //input 
    char input[30];
    int size = strlen(input);
    char one = '1';
    printf("Enter The data = ");
    scanf("%s",&input);
    //count the Number of '1'
    int count = 0;
    int i = 0,j;
    while(input[i] != '\0')
    {
        if((input[i] == '1') && (input[i+1] == '1') && (input[i+2] == '1') && (input[i+3] == '1') && (input[i+4] == '1'))
        {
            count++;
            
            shift(input,(i+5),&size);

            i = (i+6);
        }
        else
        {
            i++;
        }
    }
    // printf("Count %d",count);
   
    for (int j = 0; j < (size + 2); j++)
    {
        printf("%c",input[j]);

    }
    return 0;
}