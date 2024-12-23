/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;

	for(i=0; i<=30; i++){
		if(i % 2 ==1 || i % 3 ==0){
			continue;
		}

		printf("%d ", i);
	}

		putchar("\n");

	return 0;
}
