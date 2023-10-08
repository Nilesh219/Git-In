#include<stdio.h>

int main()
{
    int n = 6;
    for(int i =0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            printf("%d",i);
            // printf("\n");
            // printf("%d",j);
        }
    }
    return 0;
}