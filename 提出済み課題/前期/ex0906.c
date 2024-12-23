/*
24EO0118 原田健司
*/

#include <stdio.h>

int i;
int j;
int height = 8;

int main(void){

	for(i = 0; i < height; i++){
		for(j=0; j < i; j++){
			printf("  ");
		}
		printf("**\n");
	}
	return 0;
}
