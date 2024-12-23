#include <stdio.h>

int main(void)
{
	//変数valを宣言
	double val;

	//入力を則すメッセージを出力
	printf("少数値を入力してください＞");

	//変数valにキーボードから整数を入力
	scanf("%lf", &val);

	//変数valの値を出力
	printf("あなたは%fと入力しました。\n", val);

	return 0;
}
