#include<stdio.h>
void printArray(int* A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\t%d",A[i]);
    }
    printf("\n");
    
}
void bubblesort(int* A, int n)
{
    int temp;
    int issorted = 0;
    for(int i = 0; i < n-1; i++)//Numbers of passes n-1
    {
        //issorted = 1;
        printf("Working on pass number %d\n",i+1);
        for(int j = 0; j < n-1-i; j++)// Numbers of swaping in array
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                // issorted = 1;
            }
            // if(issorted)
            // {
            //     return;
            // }
        }

    }
}

int main()
{
    // int A[] = {7, 11, 9, 2, 17, 4};
     int A[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printArray(A, n);

    bubblesort(A, n);
    printArray(A, n);

   
}