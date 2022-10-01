#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i, sqr, cub;

	printf("number\t square\t cube");

	for (i = 0; i <= 10; i++)
	{
		sqr = pow(i, 2);
		cub = pow(i, 3);
		printf("\n%d\t %d\t %d", i, sqr, cub);
	}
}