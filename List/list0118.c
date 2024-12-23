#include <stdio.h>

int main(void)
{
	//変数valを宣言
	int val;

	//入力を則すメッセージを出力
	printf("整数値を入力してください＞");

	//整数valにキーボードから整数を入力
	scanf("%d", &val);

	//変数valの値を出力
	printf("あなたは%dと入力しました。\n", val);

	return 0;
}
