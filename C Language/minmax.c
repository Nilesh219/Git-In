#include<stdio.h>
int max_min(int array[],int n )
{
    int max, min;
    max = min == array[0];

    for(int i = 1; i <n; i++)
    {
        if(max<array[i])
        {
            max = array[i];
            printf("max element = ",max);
           
        }
        else if(min>array[i])
        {
            min = array[i];
            printf("Min elemwnt = ",min);
        }
        else{
            printf("no");
        }
    }
   
   
   
}
int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);

    int array[n];
    printf("Enter Array Element = ");
    for(int i = 0; i < n-1; i++)
    {
        scanf("%d ",array[i]);
    }

    max_min(array,n);
    
    return 0;
}