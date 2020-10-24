#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float dollars;
	printf("Enter sales in dollars(-1 to end);");
	scanf_s("%f", &dollars);
	while (!(dollars == -1))
	{
		printf("Salary is:%f\n", (dollars / 100 * 9) + 200);
		printf("Enter sales in dollars(-1 to end);");
		scanf_s("%f", &dollars);
	}
	system("pause");
	return 0;
}