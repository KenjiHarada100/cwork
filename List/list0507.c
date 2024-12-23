/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	int i;
	int ary[5];

	for(i=0; i < 5; i++){
		ary[i] = i + 1;
	}

	for(i = 0; i < 5; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
	}
	return 0;
}
