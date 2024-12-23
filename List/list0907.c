/*
24EO0118 原田健司
*/

#include <stdio.h>

void bin(unsigned int x);

int main(void){
	unsigned int no;

	printf("dev>"); scanf("%u", &no);
	printf("bin : "); bin(no);
	putchar('\n');

	return 0;
}

void bin(unsigned int x)
{
	int r;

	r = x % 2;
	x = x / 2;

	if (x > 0){
		bin(x);
	}

	printf("%d", r);
}
