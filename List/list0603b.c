/*
24EO0118 原田健司
*/

#include <stdio.h>
void func(int vx)
{
	vx = 50;
	printf("func vx : %p\n", &vx);
	printf("func vx : %d\n", vx);
}

int main(void){
	int vx = 10;
	func(vx);

	printf("main vx : %p\n", &vx);
	printf("main vx : %d\n", vx);

	return 0;
}
