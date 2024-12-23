/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 6

int main(void){
	int i;
	int index1 = 1;
	int index2 = LEN -1;
	int temp_val;

	int va[LEN] = {64, 42, 20, 90, 14, 52};
	temp_val = va[index2];
	va[index2] = va[index1];
	va[index1] = temp_val;

	for(i = 0; i < LEN; i++){
		printf("[%d] : %d ", i, va[i]);
	}

	putchar('\n');
	return 0;
}
