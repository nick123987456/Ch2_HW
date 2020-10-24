#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	float total=5000;
	for (i = 0; i < 15; i++)
	{
		total = total + total * (100 + i * 5) / 1000;
	}
	
	printf("Total investment:%f\n", total);
	system("pause");
	return 0;



}