/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	char na = -10;
	int i;

	for (i = 0; i < 8; i++){
		printf("+4%d", na);

	printf("%1d\n", (na >> 7) & 0x01);
	printf("%1d\n", (na >> 6) & 0x01);
	printf("%1d\n", (na >> 5) & 0x01);
	printf("%1d\n", (na >> 4) & 0x01);
	printf("%1d\n", (na >> 3) & 0x01);
	printf("%1d\n", (na >> 2) & 0x01);
	printf("%1d\n", (na >> 1) & 0x01);
	printf("%1d\n", na & 0x01);
	printf("%1d", (na >> 7) & 0x01);
	putchar('\n');
	}

	return 0;
}
