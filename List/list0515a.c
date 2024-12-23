/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 4

int main(void){
	int i;
	int va[LEN] = {0};

	for(i = 0; i < LEN; i++){
		va[(LEN -1) -i] = i; //(要素数ー１) - i
	}

	for(i = 0; i < LEN; i++){
		printf("[%d] : %d\n", i, va[i]);
	}

	return 0;
}
