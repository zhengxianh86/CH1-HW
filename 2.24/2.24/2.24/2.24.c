#include<stdio.h>
#include<stdlib.h>

int main()
{
	int in;

	printf("Input a integer:");
	
	scanf("%d",&in);

	if(in%2== 0)
	{
		printf("%d is a even number.",in);
	}
	else
	{
		printf("%d is a odd number.",in);
	}
}