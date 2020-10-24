#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float loan, rate;
	int days;
	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &loan);
	while (!(loan == -1))
	{
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &days);
		printf("The interest charge is $%f\n\n", loan*rate*days / 365);
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &loan);
	}
	system("pause");
	return 0;



}