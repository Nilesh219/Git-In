#include <stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Selectionsort(int *A, int n)
{
    int indexofmin, temp;
    printf("Running Selection sort..\n");

    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
        }
        // Swap A[i] and A[indexofmin]
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;
    }
}

int main()
{
    // Input Array (There Will be Totoal n-1 passes. 5-1 = 4 in this case!)
    //  00   01   02   03   04
    //  03,  05,  02,  13,  12

    // After first pass
    //  00   01   02   03   04
    //  02,| 05,  03,  13, 12

    // After Second pass
    //  00   01   02   03   04
    //  02,  03,| 05,  13,  12

    // After Third pass
    //  00   01   02   03   04
    //  02,  03,  05,| 13,  12

    // After Fourth pass
    //  00   01   02   03   04
    //  02,  03,  05,  12,|  13

    int A[] = { 3, 5, 2, 13, 12 };

    int n = 5;

    printarray(A, n);
    Selectionsort(A, n);
    printarray(A, n);

    return 0;
}