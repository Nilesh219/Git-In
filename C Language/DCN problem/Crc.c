#include <stdio.h>
#include <conio.h>
void main()
{
	int  f[20], n[50], div[50], temp, quotient[20], z[10];

	printf("enter the number = ");
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &n[i]);
	}
	printf("enter the division = ");
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &div[i]);
	}
	for (int i = 8; i < 12; i++)
	{
		n[i] = 0;
	}
	for (int i = 0; i < 8; i++)
	{
		temp = i;
		if (n[i] == 1)
		{
			for (int j = 0; j < 4; j++)
			{
				if (n[temp] == div[j])

				{
					n[temp] == 0;
					f[j] = 0;
				}
				else
				{
					n[temp] = 1;
					f[j] = 1;
				}
				temp = temp + 1;
			}
			quotient[1] = 1;
		}
		else
		{
			quotient[i] = 0;
		}
	}
	printf("\nthe quotient is ");
	for (int i = 0; i < 8; i++)
	{
		printf("%d", quotient[1]);
		printf("\n the remainder is ");
	}
	for (int j = 0; j < 4; j++)
	{
		printf("%d", f[j]);
	}
}
