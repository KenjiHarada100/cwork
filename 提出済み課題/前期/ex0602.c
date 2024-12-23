/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//浮動小数点型の変数を宣言
	double input_val;

	//変数input_valに小数値を入力
	printf("少数を入力＞"); scanf("%lf", &input_val);

	if (input_val < 0 || input_val > 5.2){
		//入力した値とメッセージを表示
		printf("%.1f は 0 以上 5.2 以下ではありません。\n", input_val);
	} else {
		//入力した値とメッセージを表示
		printf("%.1f は 0 以上 5.2 以下の数値です。\n", input_val);
	}

	return 0;
}
