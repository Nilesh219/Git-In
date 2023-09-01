#include <stdio.h>

//programme to calculate odd even negative or zero
int main(){
    int no;
    printf("Enter the no you want to check:");
    scanf("%d",&no);
    if(no<0){
        printf("Number is negative");
        if(no%2==0){
            printf("\n Given no is Negative even");
        }else{
            printf("\n given no is Negative odd no");
        }
    }else if(no>0){
        printf("Number is Positive");
        if(no%2==0){
            printf("\n Given no is even");
        }else{
            printf("\n given no is odd no");
        }
    }else if(no==0){
        printf("No is zero");
    }
    return 0;
}

//set 1-4
//set 2-3 and 4s