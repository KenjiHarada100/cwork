/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	int i;
	int ary[50];

	for(i=0; i < 50; i++){
		ary[i] = i + 1;
	}

	for(i = 0; i < 50; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
	}
	return 0;
}
