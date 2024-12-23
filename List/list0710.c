/*
24EO0118 原田健司
*/

#include <stdio.h>
void count_vx(void);
void count_vy(void);

int main(void){
	count_vx();
	count_vx();
	count_vx();
	count_vx();
	count_vy();
	count_vy();
	count_vy();
	count_vy();
	return 0;
}

void count_vx(void){
	static int vx = 0;
	vx++;
	printf("vx: %d\n", vx);
}

void count_vy(void){
	int vy = 0;
	vy++;
	printf("vy: %d\n", vy);
}
