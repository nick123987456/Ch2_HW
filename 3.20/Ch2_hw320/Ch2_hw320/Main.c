#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float workhours,rate;
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%f", &workhours);
	while (!(workhours == -1))
	{
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &rate);
		if (workhours > 40)
		{
			printf("Salary is %f\n\n", (float)rate * 3 / 2 * (workhours - 40) + rate * 40);
		}
		else
		{
			printf("Salary is %f\n\n", rate*workhours);
		}
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &workhours);
	}
	system("pause");
	return 0;
}