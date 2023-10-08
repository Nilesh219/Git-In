#include<stdio.h>
#include<string.h>
int main()
{
    char stud_name[40];
    int length;
    
    printf("The Name of student=");
    gets(stud_name);

    length = strlen(stud_name);
    printf("The Length of charater's is = %d ",length);


}