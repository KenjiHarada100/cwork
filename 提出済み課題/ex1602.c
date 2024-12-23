/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int vx;
	int vy;

	printf("vx>"); scanf("%d", &vx);
	printf("vy>"); scanf("%d", &vy);

	printf("XOR = 0x%x\n", vx ^ vy);

	return 0;
}
