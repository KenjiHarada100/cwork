#include <stdio.h>

int main(void){
	int n1, n2, n3, max;

	puts("３つの整数を入力してください\n");
	printf("n1>"); scanf("%d", &n1);
	printf("n2>"); scanf("%d", &n2);
	printf("n3>"); scanf("%d", &n3);

	printf("maxは%dです。\n", max);

	max = n1;

	if (n2 > max){
		max = n2;
	}

	if (n3 > max){
		max = n3;
	}

	printf("最大値は%dです。\n", max);

	return 0;
}
