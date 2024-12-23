/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int j;

	for(i = 9; i >= 1; i--){
		for(j = 9; j >=1; j--){
			printf("%3d", i * j);
		}
		putchar('\n');
	}

	return 0;
}
