/*
24EO0118 原田健司
*/

#include <stdio.h>

void print_bits(char val);

int main(void){

	char na = 10;

	printf("na      :"); print_bits(na);
	printf("na << 1 :"); print_bits(na << 1);
	printf("na >> 1 :"); print_bits(na >> 1);

	return 0;
}

void print_bits(char val)
{
	int i;
	unsigned int bits = sizeof(val) * 8;

	for (i = bits -1; i >= 0; i--){
		printf("%1d", (val >> i) & 1U);

		if (i % 4 == 0){
			putchar(' ');
		}
	}
	putchar('\n');
}
