// // // call by Value
// // // // #include<stdio.h>

// // // // int sum(int a, int b)
// // // // {
    
// // // //     return a+b;
    
// // // // }
// // // // int main(){
// // // //     int  x=5;
// // // //     int  y=7;

// // // //     printf("a+b = %d",sum(a,b));

// // // //     return 0;
// // // // }


// // // pointers using value and adddress
// // // #include<stdio.h>

// // // int main(){
// // //     int i = 5;
// // //     int *j = &i;

// // //     printf("value of i = %d\n",i);
// // //     printf("value of j = %d\n",*j);
// // //     printf("address of i = %u\n",&i);
// // //     printf("address of j = %u\n",j);
// // //     printf("address of j = %u\n",&j);
// // //     printf("value of j = %u\n",*(&j));
// // //     return 0;
// // // }


// // //call by Refrence 
// // #include<stdio.h>
// // int swap(int* x, int* y) //address sotred by pointer x, y
// // {
// //     int temp;
// //     temp = *x;
// //     *x = *y;
// //     *y = temp;

// // }
// // int main()
// // {
// //     int x = 5; int y = 7; //value of x,y
// //     printf("x = %d y = %d\n",x,y);
// //     swap(&x,&y);  // 
// //     printf("swaping = x = %d y = %d",x,y);
    
// // }

#include<stdio.h>
// find a variable Address 
int main(){
    int a=5;
    int *ptr;
    ptr = &a;
    printf("the Address of variable is a = %u\n",a);
    printf("the Address of variable is a = %u\n",&a);
    printf("the Address of variable is a = %u\n",ptr);
    printf("the Address of variable is a = %d\n",*ptr);
    return 0;
}