#include<stdio.h>

int mian()
{
    int arr[3];
    for(int i = 1 ; i<=3; i++){
        printf("Enter The Number %d",i);
        scanf("%d",&arr[i]);
    }

    if(arr[1] > arr[2] ){
       if(arr[1] > arr[3]){
           printf("The Number is Largest : %d", arr[1]);
       }else{
           printf("The Number is Largest : %d ", arr[2]);
       }
    }

    else if (arr[2] > arr[3]){
        printf("The Number is Largest : %d", arr[2]);
    }else{
        printf("The Number is Largest is : %d",arr[3]);
    }


    return 0; 
}