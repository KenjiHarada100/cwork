/*
24EO0118 原田健司
*/

#include <stdio.h>

int i;
int j;
int length = 7;

int main(void){

	for(i = length; i >= 1; i--){
		for(j=1; j <= i; j++){
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
