/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	int ix = 0;
	int iy = 0;
	int dx = 0;
	int dy = 0;

	puts("■1回目");
	printf("ix : %d\n", ++ix);
	printf("iy : %d\n", iy++);

	printf("iy : %d\n", --ix);
	printf("iy : %d\n", iy--);

	puts("■2回目");
	printf("ix : %d\n", ++ix);
	printf("ix : %d\n", iy++);

	return 0;
}
