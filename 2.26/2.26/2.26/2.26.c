#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2;
	printf("請輸入兩個整數；");
	scanf("%d %d", &n1, &n2);

	if (n1 % n2 == 0)
		printf("%d為%d的倍數",n1,n2);

	else if(n2%n1==0)
		printf("%d為%d的倍數", n2, n1);
	
	else
		printf("%d不是%d的倍數",n1,n2);
}