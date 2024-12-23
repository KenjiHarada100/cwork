/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	signed short int vx = -32765;

	printf("%dbit\n", sizeof(vx));

	for (int i = 0; i < 10; i++){
		vx -= 1;
		printf("%d\n", vx);
	}

	printf("%dbit\n", sizeof(vx));

	return 0;
}
