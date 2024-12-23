/*
24EO0118 原田健司
*/

#include <stdio.h>
int sumof(int va, int vb)
{
	printf("mae\n");
	return va + vb;
	printf("ato\n");
}

int main(void){
	int vx = 6, vy = 3;
	// int sum;

	// sum = sumof(va, vb);

	printf("sum : %d\n", sumof(vx, vy));

	return 0;
}
