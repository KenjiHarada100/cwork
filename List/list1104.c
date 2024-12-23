/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	short int vx = 10;

	short int *px = &vx;
	*px = 20;

	printf("vx : %d\n", vx);
	// printf("px : 0x%p\n", px);

	return 0;
}
