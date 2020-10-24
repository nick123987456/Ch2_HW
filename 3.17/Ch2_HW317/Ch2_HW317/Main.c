#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int account;
	float balance, charge, credit, limit;
	printf("Enter account number(-1 to end):");
	scanf_s("%d", &account);
	while (!(account == -1)) 
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charge);
		printf("Enter total credits:");
		scanf_s("%f", &credit);
		printf("Enter credits limit:");
		scanf_s("%f", &limit);
		if ((limit-(balance + charge - credit)) < 0)
		{
			printf("Account:%d\n", account);
			printf("Credits limit:%f\n", limit);
			printf("Balance:%f\n",(float)(balance+charge-credit));
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &account);
	}
	system("pause");
	return 0;
}