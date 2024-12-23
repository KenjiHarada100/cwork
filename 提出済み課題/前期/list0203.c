#include <stdio.h>

int main(void)
{
	//整数型の変数の宣言
	int vx, vy;

	//入力を則すメッセージを出力
	puts("２つの整数を入力してください。");

	//vxとvyに整数値を入力
	printf("vx>"); scanf("%d", &vx);
	printf("vy>"); scanf("%d", &vy);

	//二つの変数の除算結果を出力
	printf("vx / vy = %f\n", (double)vx / vy);

	return 0;
}
