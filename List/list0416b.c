/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int j;

	for(i = 4; i >= 0; i--){
		for(j = 0; j <= i; j++){
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
