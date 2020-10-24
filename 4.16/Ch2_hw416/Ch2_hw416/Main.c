#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;

	printf("(a)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= j)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	printf("\n(b)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= i)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	printf("\n(c)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("\n(d)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j >=0; j--)
		{
			if (i >= j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}