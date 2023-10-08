#include<stdio.h>
#include<time.h>
int Repeated(int arr[], int n)
{
    
    for(int i=0; i<n; i++)
    {
        int count = 0;
        for(int j=i+1; j<n-1; j++)
        {
             
            if(arr[i] == arr[j])
            {
               
                printf("Element Repeated = %d\n",arr[i]);
                count++;
                printf("Element %d = Element Reapeadted time %d\n",arr[i],count);
            }
           
           
        }
       
        
    }
    
}
int main()
{
    int n;
    printf("Enter the size = ");
    scanf("%d",&n);

    int arr[n];
    
    clock_t start,end;
    start = clock();
    {
       
        printf("Enter array Element = ");
        for(int i=0; i<n-1; i++)
        {
            scanf("%d ",&arr[i]);
        }

        Repeated(arr,n);
    }
    end = clock();
    double diff = (double)(end-start)/CLOCKS_PER_SEC;
    printf("%lf",diff);
}