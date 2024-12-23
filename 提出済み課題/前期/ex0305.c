/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	//整数型の変数xを宣言
	int x;

	//キーボードから入力した整数を変数xへ代入
	printf("3桁以上の整数を入力>"); scanf("%d", &x);

	//(A) スペースを入れて右詰めで５桁表示
	printf("（A）[%5d]\n", x);

	//(B) スペースを入れて左詰めで５桁表示
	printf("（B）[%-5d]\n", x);

	//(C) 0詰めで５桁表示
	printf("（C）[%05d]\n", x);

	//(D) フラグで0xを付けて16進数で表示
	printf("（D）[%#x]\n", x);

	return 0;
}
