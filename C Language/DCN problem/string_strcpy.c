#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char stud_name[30], emp_name[30];

    printf("Enter the name : ");
    gets(stud_name);

    strcpy(emp_name, stud_name);

    printf("student name : %s\n" ,stud_name,emp_name);

    return 0;
}