#include <stdio.h>

int main(void)
{
	short int na = -10;
	int i, j;

	for (i = 0; i < 8; i++){
		printf("%+5d:", na);

		for (j = 15; j >= 0; j--){
			printf("%1d", (na >> j) & 0x01);
			if (j % 4 == 0){
				putchar(' ');
			}
		}
	putchar("\n");

	na <<= 1;
	}

	return 0;
}