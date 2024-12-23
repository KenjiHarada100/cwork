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
	do{
		printf("val2>");
	//変数 val2 に整数値を入力
		scanf("%d", &vy);
		if (vy == 0){
			printf("vyには0以外の値を代入してください。\n");
		}
	}while(vy == 0);

	printf("vx / vy = %.3f\n", (double)vx / vy);

	return 0;
}
