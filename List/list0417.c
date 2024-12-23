/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int j;

	for(i = 0; i <= 9; i++){
		for(j = 0; j <=9; j++){
			printf("%3d", i * j);
		}
		putchar('\n');
	}

	return 0;
}
