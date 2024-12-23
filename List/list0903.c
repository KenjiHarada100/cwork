/*
24EO0118 原田健司
*/

#include <stdio.h>

int sqr_i(int x);
double sqr_d(double x);

int main(void){
	int nx;
	double dx;

	printf("整数を入力＞"); scanf("%d", &nx);
	printf("小数を入力＞"); scanf("%lf", &dx);

	printf("入力値の2乗は%dです。\n", sqr_i(nx));
	printf("入力値の2乗は%.2fです。\n", sqr_d(dx));

	return 0;
}

int sqr_i(int x)
{
	return x * x;
}

double sqr_d(double x)
{
	return x * x;
}
