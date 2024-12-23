/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 5


int main(void){

	int va[LEN] = {42, 56, 85, 97, 23};
	int vb[5];
	int i;


		for(i = 0; i < LEN; i++){
			printf("va[%d] : %d \n", i, va[i]);
		}

		printf("\n");

		for(i = 0; i < LEN; i++){
			vb[i] = va[i];
			printf("vb[%d] : %d \n", i, vb[i]);
    }

    return 0;
}
