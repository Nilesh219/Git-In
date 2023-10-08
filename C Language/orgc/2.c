#include<stdio.h>

int main(){
    int age;
    int vipass = 0;
    // vipass = 1;
    printf("Enter The age = ");
    scanf("%d",&age);

    if((age <= 70 && age >= 18) || vipass == 1)
    {
        printf("your age is above 18 below 70 you can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}