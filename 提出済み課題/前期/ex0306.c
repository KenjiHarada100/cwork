/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	//整数型の変数vaを宣言
	int va;

	//キーボードから入力した整数を変数vaへ代入
	printf("3桁以上の整数を入力>"); scanf("%d", &va);

	if (va < 100){
	//１００以下の数が入力されたときに表示されるメッセージ
		printf("3桁以上の数を入力しましょう。\n");
	} else {
	//va の百の位の整数を表示する。
		printf("入力した%dの百の位の数は%dです。\n", va, va / 100 % 10);
	}

	return 0;
}
