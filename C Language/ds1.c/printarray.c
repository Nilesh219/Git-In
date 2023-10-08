#include<stdio.h>
int main()
{
    int A[6];
    printf("enter the element = ");
    for(int i = 0; i<6; ++i)
    {
        scanf("%d",&A[i]);
    }
    printf("\n");
   for(int i = 0; i < 6; ++i)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}