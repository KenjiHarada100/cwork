/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//整数型の変数 vx, vy を宣言
	int vx, vy;
	//「2 つの整数を入力してください。」と表示
	printf("2 つの整数を入力してください。\n");
	//「val1>」と表示
	printf("val1>");
	//変数 val1 に整数値を入力
	scanf("%d", &vx);
	//「val2>」と表示
	printf("val2>");
	//変数 val2 に整数値を入力
	scanf("%d", &vy);

	if (vy != 0){
		//vx / vy の計算結果を小数第 3 位まで表示
		printf("vx/ vy = %.3f\n", (double)vx / vy);
	}else{
		//「vy は 0 以外の数値にしましょう。」と表示
		printf("vy は 0 以外の数値にしましょう。");
	}

	return 0;
}
