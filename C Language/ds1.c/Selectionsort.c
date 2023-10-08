#include<stdio.h>
void printArray(int* A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\t%d",A[i]);
    }
    printf("\n");
}
void selectionsort(int* A, int n )
{
    int IndexofMin,temp;
    for(int i = 0; i<n-1; i++)
    {
        IndexofMin = i;
        for(int j = i+1; j<n; j++)
        {
            if(A[j] < A[IndexofMin])
            {
                IndexofMin = j;
            }
        }
        //swap A[i] and A[IndexofMin]
        temp = A[i];
        A[i] = A[IndexofMin];
        A[IndexofMin] = temp;
    }
}
int main()
{
    int A[] = {7, 4, 2, 11, 10, 6};
    int n = 6;
    printArray(A,n);
    selectionsort(A,n);
    printArray(A,n);
}