#include<stdio.h>
void printarray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("%d ", A[i]);
    }
   printf("\n"); 
}
void bubblesort(int* A , int n)
{
    int temp;
    int isSorted = 0;
    for (int  i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n",i+1);
        
        for (int j = 0; j < n-1-i; j++) // For comparison in each pass
        {
           if (A[j] > A[j+1])
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
           }
           
        }
        
    }
    
}
void bubblesortAdaptive(int* A , int n)
{
    int temp;
    int isSorted = 0;
    for (int  i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n",i+1);
        isSorted = 1;
        for (int j = 0; j < n-1-i; j++)// For comparison in each pass
        {
           if (A[j] > A[j+1])
           {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;

           }
           if (isSorted)
           {
            return;
           }
           
           
        }

    }
    
}
int main()
{
    int A[] = {25, 26, 7, 5 ,9 ,10};
    //   int A[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    printarray(A, n); //printing the array before sorting 
    bubblesort(A, n); //function to sort the array 
    printarray(A, n); //printing the array before sorting 

    bubblesortAdaptive(A, n);
    printarray(A, n);
}


