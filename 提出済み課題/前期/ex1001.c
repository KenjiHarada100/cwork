/*
24EO0118 原田健司
*/

#include <stdio.h>
int i;
int ary[5] = {32, 56, 41, 95, 23};

int main(void){
	for(i = 0; i < 5; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
	}


	return 0;
}
