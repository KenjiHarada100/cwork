/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	short int vc[4] = {10, 20, 30, 40};
	short int *pt = vc;

	printf("vcのサイズ：%d byte\n", sizeof(vc));
	printf("ptのサイズ：%d byte\n", sizeof(*pt));

	return 0;
}
