/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SQR(x) (x * x)

int main(void){
	int nx;

	printf("整数を入力＞"); scanf("%d", &nx);
	printf("入力値の2乗は%dです。\n", SQR(nx));

	return 0;
}
