#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low;
    int j = high;

    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quicksort(int A[], int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(A, low, high);
        quicksort(A, low, partitionindex - 1);
        quicksort(A, partitionindex + 1, high);
    }
}
int main()
{
    int A[] = {6, 10, 3, 11, 4, 2, 1, 5, 4};
    int n = 9;
    printArray(A, n);
    printf("\n");
    quicksort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}