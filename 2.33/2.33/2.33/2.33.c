#include<stdio.h>
#include<stdlib.h>

int main()
{
	float far, park, pass;//���{�ơA�����O�A�L���O
	float gasMoney, gasUse;//�C��쪺�T�o�h�ֿ��A�C��쪺�T�o��}�h��
	float gasTotal;//�T�o��h�ֿ�

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