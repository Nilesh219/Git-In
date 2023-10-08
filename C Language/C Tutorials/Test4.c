#include<stdio.h>
//write c Programme to Largest Numbers 
int main()
{
   int Num1 , Num2 , Num3 ;

   printf("The three Numbers are  : ");
   scanf("%d",&Num1);
   scanf("%d",&Num2);
   scanf("%d",&Num3);

   // we using the nested if else condition 

   if(Num1 > Num2 ){
       if(Num1 > Num3){
           printf("The Number is Largest : %d", Num1);
       }else{
           printf("The Number is Largest : %d ", Num2);
       }
    }

    else if (Num2 > Num3){
        printf("The Number is Largest : %d", Num2);
    }else{
        printf("The Number is Largest is : %d",Num3);
    }
    return 0;
}
