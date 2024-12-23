#include <stdio.h>

int main(void)
{
	int vx;
	int vy;

	printf("vx >"); scanf("%d", &vx);
	printf("vy >"); scanf("%d", &vy);

	if (vx ^ vy)
	{
		puts("入力した値は異なる値です");
	}else{
		puts("入力した値は同じ値です。");
	}

	return 0;
}
