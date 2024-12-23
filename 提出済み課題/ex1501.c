/*
24EO0118 原田健司
*/

#include <stdio.h>

void print_x();
int x = 520;

int main(void)
{
	int x = 100;
	int i;

	for (i = 0; i < 4; i++) {
		int x = i * 100;
		printf("%d\n", x);
	}
	print_x();
	printf("%d\n", x);

	return 0;
}

void print_x()
{
	printf("%d\n", x);
}
