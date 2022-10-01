#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2;
	printf("叫块ㄢ俱计");
	scanf("%d %d", &n1, &n2);

	if (n1 % n2 == 0)
		printf("%d%d计",n1,n2);

	else if(n2%n1==0)
		printf("%d%d计", n2, n1);
	
	else
		printf("%dぃ琌%d计",n1,n2);
}