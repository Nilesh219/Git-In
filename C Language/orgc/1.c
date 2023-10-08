#include<stdio.h>

int main(){
    int a;
    printf("Eneter Number = ");
    scanf("%d",&a);

    if(a % 2 == 0)
    {
        printf("Event Number %d",a);
    }
    else
    {
        printf("Odd Number %d",a);
    }
    return 0;
}