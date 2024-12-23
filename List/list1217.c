/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <stdlib.h>

int array_sumof(int *pa, int n);

int main(void){
	int i, len;

	int *ptr = 0;

	printf("配列の要素数>"); scanf("%d", &len);
	ptr = (int *)malloc(sizeof(int) * len);
	if (len == NULL)
	{
		printf("メモリの確保に失敗しました。\n");
		return 1;
	}
	for (i = 0; i < len; i++){
		printf("ptr[%d]", i); scanf("%d", &ptr[i]);
	}

	printf("合計： %d\n", array_sumof(ptr, len));
	free(ptr);

	return 0;
}


int array_sumof(int *pa, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++){
		sum += pa[i];
	}

	return sum;
}
