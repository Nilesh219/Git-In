#include<stdio.h>
void printArray(int* A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\t%d",A[i]);
    }
    printf("\n");
}
void insertionsort(int* A, int n)
{
    int key, j;
    for(int i = 1; i<=n-1; i++)
    {
        key = A[i];
        j = i-1;
       
        while(j>=0 && A[j] > key)
        {

            A[j+1] = A[j];
            j--;

        }
        A[j+1] = key;
    }
}
int main()
{
    int A[6];
    // int n = 6;
    for(int i = 0; i<6; i++)
    {
        scanf("\t%d",&A[i]);
    }
   
    printArray(A,6);
    insertionsort(A,6);
    printArray(A,6);
    return 0;
}