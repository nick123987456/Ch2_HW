#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j,num1,num2;
	num1 = 3;
	num2 = 5;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if ((j > num1) && (j < num2))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		if (i < 4)
		{
			num1--;
			num2++;
		}
		else
		{
			num1++;
			num2--;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}