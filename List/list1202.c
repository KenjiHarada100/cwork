/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	short int vc[4] = {10, 20, 30, 40};

	short int *pt = vc;
	printf("*(pt + 0)のサイズ: %dbyte\n", sizeof(*(pt + 0)));
	printf("(pt + 0)のサイズ: %dbyte\n", sizeof((pt + 0)));
	return 0;
}
