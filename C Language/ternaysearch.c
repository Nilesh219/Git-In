#include<stdio.h>
void ternaysearch(int array[], int size, int key)
{
    int low = 0;
    int high = (size-1);

    while(low <= high)
    {
        int mid1 = low+(high-low)/3;
        int mid2 = high-(high-low)/3;

        if(array[mid1] == key)
        {
            printf("Element Found mid1 \n");
            break;
        }
        else if(array[mid2] == key)
        {
            printf("Element Found mid2 \n");
            break;
        }
        else if(key < array[mid1])
        {
            high = (mid1 -1);
            printf("Element Found at under mid1\n");
            break;
        }
        else if(key > array[mid2])
        {
            low = (mid2 +1);
            printf("Element Found at above mid2\n");
            break;
        }
        else
        {
            low = (mid1 +1);
            high = (mid2 -1);
            printf("Element Found at between mid1 & mid2 \n");
            break;
        }
        
    }
}
int main()
{
    int array[] = {1, 4, 6, 8, 13, 14, 16, 18};
    int size = sizeof(array)/sizeof(int);

    ternaysearch(array, size, 14);

    return 0;
}