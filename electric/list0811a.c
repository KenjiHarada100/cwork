#include <stdio.h>

int main(void)
{
	char na = -10;
	int i;

	for (i = 0; i < 8; i++){
		printf("%+4d:", na);

		printf("%1d", (na >> 7) & 0x01);
		printf("%1d", (na >> 6) & 0x01);
		printf("%1d", (na >> 5) & 0x01);
		printf("%1d", (na >> 4) & 0x01);
		printf("%1d", (na >> 5) & 0x01);
		printf("%1d", (na >> 3) & 0x01);
		printf("%1d", (na >> 2) & 0x01);
		printf("%1d", (na >> 1) & 0x01);
		printf("%1d", na  & 0x01);
		putchar(' ');
		putchar('\n');

		na <<= 1;
	}

	return 0;
}
