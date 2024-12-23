/*
24EO0118 原田健司
*/

#include <stdio.h>
int sumof(int va, int vb)
{
	return va + vb;
}

int main(void){
	int va = 6, vb = 3;
	int sum;

	sum = sumof(va, vb);

	printf("sum : %d\n", sum);

	return 0;
}
