#include<stdio.h>
#include<time.h>
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
    // int size;
    
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    
        int array[n];
        printf("Enter the Element in array \n");
        for(int i = 0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }
    clock_t start, end;
    start = clock();
    {
        
        int size = sizeof(array)/sizeof(int);
        int key;
        printf("Enter the key = ");
        scanf("%d",&key);
        ternaysearch(array, size, key);
    }
    end = clock();
    double diff = (double)(end-start)/CLOCKS_PER_SEC;
    printf("%lf",diff);
    return 0;
}