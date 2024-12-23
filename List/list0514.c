/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 3

int main(void){
	int i;
	int ary1[LEN] = {32, 90, 54};
	int ary2[LEN] = {0};

	for(i = 0; i < LEN; i++){
		printf("[%d] : %2d ", i, ary2[i]);
	}

	putchar('\n');

	for(i = 0; i < LEN; i++){
		ary2[i] = ary1[i];
	}

	for(i = 0; i < LEN; i++){
		printf("[%d] : %2d ", i, ary2[i]);
	}

	putchar('\n');

	return 0;
}
