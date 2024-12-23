/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 3

int main(void){
	int i;

	double da[LEN] = {4.5, 6.3, 0};
	da[2] = da[0] + da[1]; //要素２に要素０と要素１を足した値を代入する

	for(i = 0; i < LEN; i++){
		printf("da[%d] : %.1f\n", i, da[i]);
	}

	return 0;
}
