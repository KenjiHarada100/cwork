/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	//整数型の変数va, vaを２で割ったあまりの数xを宣言
	int va, x;

	//キーボードから入力した整数を変数vaへ代入
	printf("整数を入力>"); scanf("%d", &va);

	x = va % 2;

	if ( x == 0){
	//偶数が入力されたとき
		printf("%dは偶数です。\n", va);
	} else {
	//奇数が入力されたとき
		printf("%dは奇数です。\n", va);
	}

	return 0;
}
