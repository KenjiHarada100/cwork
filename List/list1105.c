/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 11

void func(int *nx, int *ny);

int main(void){

	short int vx = 10;

	short int *px = &vx;

	printf("vx : %dbyte, (アドレス0x%p), %d\n", sizeof(vx), &vx, vx);
	printf("px : %dbyte, (アドレス0x%p), %d\n", sizeof(px), &px, px);h

	return 0;
}

void func(int *px, int *py){
	// printf("nx : 0x%p (アドレス:0x%p) *nx:%d\n", nx, &nx, *nx);
	// printf("ny : 0y%p (アドレス:0y%p) *ny:%d\n", ny, &ny, *ny);

	*px = 301;
	*py = 302;
}
