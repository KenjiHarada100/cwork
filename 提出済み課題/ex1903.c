/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	// 変数の宣言
	int val;

	// ポインタの宣言
	int *ptr = &val;  // val を指すポインタ ptr

	// キーボードから整数を入力
	printf("正の整数を入力>"); scanf("%d", &val);

	while (*ptr >= 0) { // val が 0 以上ならループ

		// 変数 val でポインタによる演算ができているか表示して確認
		printf("val : %d\n", val);
		// ポインタ ptr で間接参照を行い val の値を-1 する
		val = *ptr - 1;
	}

	return 0;
}
