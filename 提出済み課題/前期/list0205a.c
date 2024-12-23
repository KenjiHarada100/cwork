#include <stdio.h>

int main(void)
{

	//int va;
	double va;
	//printf("整数を代入してください＞");
	printf("数を代入してください＞");
	//scanf("%d", &va);
	scanf("%lf", &va);

	//printf("vaの4桁目：" );
	//printf("%#X", va / 10 / 10 / 10 % 10);
	//printf("%#x", va);
	printf("%06.1f", va);

	return(0);
}
