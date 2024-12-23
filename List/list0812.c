/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	char na = 20;

	printf("%1d", (na >> 2) & 1U);
	putchar('\n');
	return 0;
}
