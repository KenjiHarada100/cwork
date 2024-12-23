/*
24EO0118 原田健司
*/

#include <stdio.h>

double maxof(double na, double nb)
{
	return (na > nb) ? na : nb;
}

int main(void){
	int va = 3.2, vb = 5.4;

	printf("sum : %.1f\n", maxof(va, vb));

	return 0;
}
