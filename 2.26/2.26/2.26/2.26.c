#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2;
	printf("�п�J��Ӿ�ơF");
	scanf("%d %d", &n1, &n2);

	if (n1 % n2 == 0)
		printf("%d��%d������",n1,n2);

	else if(n2%n1==0)
		printf("%d��%d������", n2, n1);
	
	else
		printf("%d���O%d������",n1,n2);
}