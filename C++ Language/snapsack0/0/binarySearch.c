#include<stdio.h>
#include<time.h>
#define max 20
int binarysearch(int n, int a[], int low, int high, int k){
    int mid = (low + high)/2;
    if(low > high)
    {
        return -1;
    }
    if(k == a[mid]){
        return (mid);
    }
    else if(k < a[mid]){
        return binarysearch(n, a, low, mid-1, k );
    }
    else{
        return binarysearch(n, a, mid+1, high, k);
    }

}
int linarsearch(int n, int a[], int k){
    if(n < 0){
        return -1;
    }
    if(k == a[n-1]){
        return (n-1);
    }
    else{
        return linarsearch(n-1, a, k);
    }
}
int main()
{
    int n, i, a[max], k, low, high, pos;
    int choice;
    clock_t begin,end;
    while(1)
    {
        printf("Menu ... 1.Binary search\n 2. Liner search \n 3. Exit\n");
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the no of Element = ");
                scanf("%d",&n);
                for(int i = 0; i < n; i++)
                {
                    printf("Enter the array element = ");
                    scanf("%d \t", &a[i]);
                }
                printf("Enter the Element = ");
                scanf("%d",&k);
                low = 0;
                high = n-1;
                begin = clock();
                pos = binarysearch(n, a, low, high, k);
                end = clock();
                if(pos == -1){
                    printf("\n \n Unsuccessful Search...");

                }
                else{
                    printf("You ELement %d found at position %d",k, pos+1);
                    printf("Time to exute the progarme ", (end-begin)/CLK_TCK);    
                }
            break;

            case 2:
                printf("Enter the no of Element = ");
                scanf("%d",&n);
                for(int i = 0; i < n; i++)
                {
                    printf("Enter the array element = ");
                    scanf("%d ", &a[i]);
                }
                printf("Enter the Element = ");
                scanf("%d",&k);
                begin = clock();
                pos = linarsearch(n, a, k);
                end = clock();

                if(pos == -1){
                    printf("UnSuccessful search..");
                }
                else{
                    printf("Element %d found at the psotion %d",k, pos+1);
                    printf("Time to excute the program.. ",(end-begin)/CLK_TCK);
                }

                
        }
    } 
}