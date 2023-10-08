#include <stdio.h>

int main()
{
    int n, counter = 0;
    printf("Enter the Number = ");
    scanf("%d", &n);

    if (n == 0)
        printf("The Number is only 1 Number \n");
    else
    {
        while (n != 0)
        {
            n = n / 10;
            counter++;
        }
        printf("the count of Number is %d",counter);
    }
    return 0;
}