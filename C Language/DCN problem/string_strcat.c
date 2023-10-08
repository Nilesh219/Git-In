#include <stdio.h>
#include <string.h>

int main()
{
    char first_name[30], second_name[30];

    printf("Enter the first name = ");
    gets(first_name);

    printf("Enter the second name = ");
    gets(second_name);

    strcat(first_name, second_name);

    printf("Your full Name is = %s", first_name);
 
    return 0;
}