/*
24EO0118 原田健司
*/

#include <stdio.h>
int maxof(int na, int nb)
{
	return (na > nb) ? na : nb;
}

int main(void){
	int vx = 10, vy = 20;

	printf("sum : %d\n", maxof(vx, vy));

	return 0;
}
