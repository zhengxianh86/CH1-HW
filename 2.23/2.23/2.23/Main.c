#include<stdio.h>
#include<stdlib.h>

int main()
{
	int M, m;
	int a, b, c;

	printf("Input 3 integers:");
	scanf("%d%d%d",&a,&b,&c);

	//a >= b > c
		if ((a >= b) && (b > c)) { M = a; m = c; }

	//a >= c > b
		if ((a >= b) && (c > b)) { M = a; m = b; }

	//b >= a > c
		if ((b >= a) && (a > c)) { M = b; m = c; }

	//b >= c > a
		if ((b >= c) && (c > a)) { M = b; m = a; }

	//c >= a > b
		if ((c >= a) && (a > b)) { M = c; m = b; }

	//c >= b > a
		if ((c >= b) && (b > a)) { M = c; m = a; }

	//a > b >= c
		if ((a > b) && (b >= c)) { M = a; m = c; }

	//a > c >= b
		if ((a > b) && (c >= b)) { M = a; m = b; }

	//b > a >= c
		if ((b > a) && (a >= c)) { M = b; m = c; }

	//b > c >= a
		if ((b > c) && (c >= a)) { M = b; m = a; }

	//c > a >= b
		if ((c > a) && (a >= b)) { M = c; m = b; }

	//c > b >= a
		if ((c > b) && (b >= a)) { M = c; m = a; }

	if (a == b && b == c) { M = a; m = a; }

	printf("largest integer is %d\n",M);
	printf("smallest integer is %d\n",m);
}