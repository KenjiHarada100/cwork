/*
24EO0118 原田健司
*/
#include <stdio.h>

int main(void)
{
	//変数の宣言
	char vc;	//vcを宣言

	//vcに文字の入力を求める
	printf("変数vcに半角文字を入力してください＞");
	scanf("%c", &vc);

	//vcに代入した文字を出力
	printf("変数vcに代入された文字は%cです。\n", vc);

	return 0;
}
