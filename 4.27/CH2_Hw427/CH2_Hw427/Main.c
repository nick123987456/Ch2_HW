#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int a, b, c;
	for (c = 1; c < 500; c++)
	{
		for (b = 1; b < c; b++)
		{
			for (a = 1; a < b; a++)
			{
				if (a + b > c)
				{

					if (c * c == a *a + b *b)
					{
						printf("%3d,%3d,%3d is right triangle\n",c,b,a);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}