#include<stdio.h>
#include<string.h>
void shift(char arr[30], int position, int *size)
{
    
    for(int i = (*size-1); i >= position; i--)
    {
        
        arr[i+1] = arr[i];
        
    }
    
    arr[position]= '0';
    *size++;
}
int main()
{
    char data[30];
    int i = 0, j;
    printf("Enter the Data =");
    scanf("%s",data);
    int size = strlen(data);


    while (data[i] != '\0') 
    {
        if ((data[i] =='1') && (data[i+1] == '1') &&
        (data[i+2] == '1') && (data[i+3] == '1') && (data[i+4] == '1'))
        {
            shift(data, (i+5), &size);

            i = (i+6);
        }
        else
        {
            i++;
        }
        
    }

    for(int j = 0; j < (size + 2); j++)
    {
        printf("%c",data[j]);
    }
    return 0;
}