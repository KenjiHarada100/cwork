/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int vc[] = {32, 56, 45};

	printf("配列vcの要素数は%dです。\n", sizeof(vc) / sizeof(vc[0]));

	return 0;
}
