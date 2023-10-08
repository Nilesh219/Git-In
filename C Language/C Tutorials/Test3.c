#include <stdio.h>

int main()
{
    int num1;
    printf("Enter The Value : ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("The Number is Even %d", num1);
    }
    else
    {
        printf("The Number is Odd %d ", num1);
    }

    return 0;
}