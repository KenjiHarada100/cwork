/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	//整数を代入できる変数x,yをまとめて宣言
	int x, y;

	//入力を則すメッセージを出力
	puts("２つの整数値を入力してください。");

	//変数xにキーボードから入力した整数値を代入
	printf("x>"); scanf("%d", &x);

	//変数yにキーボードから入力した整数値を代入
	printf("y>"); scanf("%d", &y);

	//x + yの結果を表示
	printf("x + y = %d\n", x + y);

	//x - yの結果を表示
	printf("x - y = %d\n", x - y);

	return 0;
}
