/*
24EO0118 原田健司
*/

#include <stdio.h>

void sumof(int va, int vb)
{
	printf("%d + %d = %d\n", va, vb, va + vb);
}

int main(void){
	int vx = 10, vy = 4;
	sumof(3, 6);
	sumof(vx, vy);
	sumof(vx * 3, vy * 2);
	sumof(3.5, 2); //型の不一致

	return 0;
}
