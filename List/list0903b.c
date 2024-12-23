/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SQR(x) ((x) * (x))

// int sqr_i(int x);
// double sqr_d(double x);

int main(void){
	int nx;
	double dx;

	printf("整数を入力＞"); scanf("%d", &nx);
	printf("小数を入力＞"); scanf("%lf", &dx);

	printf("入力値の2乗は%dです。\n", SQR(nx));
	printf("入力値の2乗は%.2fです。\n", SQR(dx));

	return 0;
}

// int sqr_i(int x)
// {
// 	return x * x;
// }

// double sqr_d(double x)
// {
// 	return x * x;
// }
