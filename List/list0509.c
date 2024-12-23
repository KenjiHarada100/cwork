/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int length;

	int ary[]={12, 24, 43, 62, 31};

	length = sizeof(ary) / sizeof(ary[0]);

	for(i = 0; i < length; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
	}

	return 0;
}
