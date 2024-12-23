/*
24EO0118 原田健司
*/

#include <stdio.h>

void print_x1(void);
void print_x2(void);

int x = 10;

int main(void)
{
	int i;

	print_x2();
	print_x2();

	print_x1();
	print_x1();

for (i = 0; i < 5; i++) {

	x += i;
	printf("%d\n", x);
}

printf("%d\n", x);

return 0;
}

void print_x1(void)
{
	static int x = 0;
	x += 10;
	printf("%d\n", x);
}

void print_x2(void)
{
	int x = 0;
	x += 10;
	printf("%d\n", x);
}
