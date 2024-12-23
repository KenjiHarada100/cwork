/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int j;
	int k;

	for(i = 0; i <= 4; i++){
		for(j = 0; j < i; j++){
			putchar(' ');
		}
		for(k = 0; k<=4-j; k++){
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
