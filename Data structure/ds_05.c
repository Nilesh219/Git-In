#include<stdio.h>
int binarySearch(int arr[] , int size , int element )
{
    int low , mid , high;
    low = 0;
    high = size-1;
    // array shorted The condition is low <= High
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element )
        {
            return mid; 
        }

        if(arr[mid] < element )
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;

        }
    }
    return -1;
}
int main()
{
    // the array is shorted because the binary search allow to the shorted array 
    int arr[] = {1,2,4,6,8,10,12,14,16,18,20,22,24};
    // This is Size of array it is also we write int size = 13;
    int size = sizeof(arr)/sizeof(int);
    int element = 20;
    int searchIndex = binarySearch(arr, size , element);
    printf("the element is %d was found at Index %d \n ",element ,searchIndex );

    return 0;
}