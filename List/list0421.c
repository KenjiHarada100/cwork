/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int j;

	for(i=1; i<=8; i++){
		for(j=1; j<=8; j++){
			if(i % 2 == 0 && j >= 5){
				break;
			}
		putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
