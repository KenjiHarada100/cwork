/*
24EO0118 原田健司
*/

#include <stdio.h>

int factorial(int n);

int main(void){
	int n;

	printf("n >"); scanf("%d", &n);
	printf("1 から %d までの和は %d です。\n", n, factorial(n));

	return 0;
}

int factorial(int n)
{
	int ret;

	if (n > 0)
	{
		ret = n + factorial(n -1);
	}else{
		ret = 0;
	}

	return ret;
}
