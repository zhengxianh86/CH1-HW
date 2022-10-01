#include<stdio.h>
#include<stdlib.h>

int main()
{
	float w,h,bmi;

	printf("Please fill in your weight(Kilogram):");
	scanf("%f", &w);
	printf("Please fill in your weight(CentiMeter):");
	scanf("%f", &h);

	h = h / 100;
	bmi=w/h/h;

	printf("Your BMI is %.4f\nYour body situation is ",bmi);

	if (bmi < 18.5) { printf("Underweight"); }
	
	if ((18.5 <= bmi) && (bmi < 25) ) { printf("Normal"); }

	if ((25 <= bmi) && (bmi < 30)) { printf("Overweight"); }

	if (30 <= bmi) { printf("Obese"); }
}