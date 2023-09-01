#include <stdio.h>
int linearsearch(int arr[], int size , int element)
{
    {
        for(int i = 0 ; i < size ; i++)
        {
            if (arr[i] == element )
            {
                return i;
            }
            
        }
        return -1;
    }
}
int main()
{
    //unsorted array using Linear serach  we can find the element in array
    int arr[]={1,3,5,8,7,12,16,18,20,34,50,60};
    int size = sizeof(arr)/sizeof(int);
    int element  = 18;
    int searchIndex = linearsearch(arr, size , 18 );
    printf("The Element is %d was found at index %d \n ",element ,searchIndex);
    
    return 0;
}