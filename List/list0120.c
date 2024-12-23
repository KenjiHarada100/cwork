#include <stdio.h>

int main(void)
{
	//変数valを宣言
	int vx, vy;

	//入力を則すメッセージを出力
	printf("２つの整数値を入力してください。\n");

	//vxとvyにキーボードから整数を入力
	//入力処理は変数ごとに記述する
	printf("vx>"); scanf("%d", &vx);
	printf("vy>"); scanf("%d", &vy);

	//vx + vyを演算して演算結果を出力
	printf("vx + vy = %d\n", vx + vy);

	return 0;
}
