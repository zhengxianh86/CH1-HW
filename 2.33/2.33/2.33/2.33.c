#include<stdio.h>
#include<stdlib.h>

int main()
{
	float far, park, pass;//里程數，停車費，過路費
	float gasMoney, gasUse;//每單位的汽油多少錢，每單位的汽油能開多遠
	float gasTotal;//汽油花多少錢

	printf("Please fill in total miles driven a day:");
	scanf("%f", &far);

	printf("Please fill cost per gallon of gasoline:");
	scanf("%f", &gasMoney);

	printf("Please fill in average miles per gallon:");
	scanf("%f", &gasUse);

	printf("Please fill in parking fees per day:");
	scanf("%f", &park);

	printf("Please fill in tolls per day:");
	scanf("%f", &pass);

	gasTotal = far / gasUse * gasMoney;
	
	printf("Your cost per day by driving:%.0f", gasTotal + park + pass);
}