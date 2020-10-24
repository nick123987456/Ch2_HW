#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int codes,hours,item;
	float weeklysalary,rate,dollars,price;
	printf("Enter the code:(-1 to end):");
	scanf_s("%d", &codes);
	while (! (codes == -1))
	{
		switch (codes)
		{
		case 1:
		{
			printf("Enter the manager's weekly salary:");
			scanf_s("%f", &weeklysalary);
			printf("The manager'weekly salary:%f\n\n",weeklysalary);
			break;
		}
		case 2:
		{
			printf("Enter the hourly worker of hours worked:");
			scanf_s("%d", &hours);
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%f", &rate);
			if (hours > 40)
			{
				printf("The hourly worker's salary is %f\n\n", (float)rate * 3 / 2 * (hours - 40) + rate * 40);
			}
			else
			{
				printf("The hourly worker's salary is %f\n\n", rate*hours);
			}
			break;
		}
		case 3:
		{
			printf("Enter the commission worker sales in dollars:");
			scanf_s("%f", &dollars);
			printf("The commission worker's salary is:%f\n\n", (dollars *0.057) + 250);
			break;
		}
		case 4:
		{
			printf("Enter the pieceworkers produce item:");
			scanf_s("%d", &item);
			printf("Enter the item's price:");
			scanf_s("%f", &price);
			printf("The pieceworker's salary is:%f\n\n", item*price);
			break;
		}
		default:
		{
			printf("The code is error\n\n");
		}
		}
		printf("Enter the code:(-1 to end):");
		scanf_s("%d", &codes);
	}
	system("pause");
	return 0;
}