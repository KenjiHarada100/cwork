/*
24EO0118 原田健司
*/

#include <stdio.h>

double sumof(double, double);

int main(void){
	double na, nb;

	printf("小数　na>");
	scanf("%lf", &na);

	printf("小数　nb>");
	scanf("%lf", &nb);

	printf("合計値は%.2fです。\n", sumof(na, nb));

	double sumof(double vx, double vy)
	{
		return (vx + vy);
	}

	return 0;
}
