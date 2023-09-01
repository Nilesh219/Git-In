#include <stdio.h>
void display(int arr[], int n)
{
    //code of Traversal
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int Deletion(int arr[], int size, int index)
{
    //code of Deletion
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {2, 3, 4, 5, 6};
    int size = 5, index = 2;
    display(arr, size);
    Deletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}