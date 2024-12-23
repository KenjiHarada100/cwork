/*
24EO0118 原田健司
*/
#include <stdio.h>

int factional(int n);

int main(void){
	int num;
	printf("整数を入力＞"); scanf("%d", &num);

	printf("%dの階乗は%dです。\n", num, factional(num));

	return 0;
}

int factional(int n)
{
	int ret;
	static int count = 0;
	count++;
	printf("%02d回目の呼び出し：n(0x%p) = %d\n", count, &n, n);

	if (n > 0)
	{
		ret  = n * factional(n - 1);
	}else{
		ret = 1;
	}

	return ret;
}
