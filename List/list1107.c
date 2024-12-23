/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 11

void func(int *nx, int *ny);

int main(void){

	int vx = 201; int vy = 202;
	printf("vx : %d (アドレス0x%p)\n", vx, &vx);
	printf("vy : %d (アドレス0x%p)\n", vy, &vy);

	func(&vx, &vy);

	return 0;
}

void func(int *nx, int *ny){
	printf("nx : 0x%p (アドレス:0x%p) *nx:%d\n", nx, &nx, *nx);
	printf("ny : 0y%p (アドレス:0y%p) *ny:%d\n", ny, &ny, *ny);
}
