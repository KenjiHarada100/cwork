/*
24EO0118 原田健司
*/

#include <stdio.h>

double diff(double va, double vb);

int main(void){
	double vx;
	double vy;

	puts("２つの小数を入力してください。");

	printf("vx>"); scanf("%lf", &vx);
	printf("vy>"); scanf("%lf", &vy);

	diff(vx, vy);

	printf("%.2f - %.2f = %.2f", vx, vy, vx - vy);

	return 0;
}

double diff(double va, double vb)
{
	return va - vb;
}
