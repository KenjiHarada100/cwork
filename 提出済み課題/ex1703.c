/*
24EO0118 原田健司
*/

#include <stdio.h>

int factorial(int n);

int main(void){

	int n, r, combi;

	puts("n と r に整数を入力して下さい。");

	n = 0;
	r = 1;
	while (n < r)
	{
		printf("n > "); scanf("%d", &n);
		printf("r > "); scanf("%d", &r);
		if ( n < r)
		{
		puts("n >= r になるようにして入力して下さい。");
		}
	}

	combi = 0;
	combi = factorial(n) / (factorial(r)*factorial(n - r));

	printf("組み合わせは %d 通りです。\n", combi);

	return 0;
}

int factorial(int n)
{
	int ret;
	if (n > 0)
	{
		ret = n * factorial(n -1);
	} else {
		ret = 1;
	}

	return (ret);
}
