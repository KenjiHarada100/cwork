/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//変数 val1, val2, diff を宣言
	double val1, val2, diff;

	//「2 つの小数を入力してください。」と表示
	printf("2 つの小数を入力してください。\n");
	//「val1>」と表示
	printf("val1>");
	//変数 val1 に小数値を入力
	scanf("%lf", &val1);
	//「val2>」と表示
	printf("val2>");
	//変数 val2 に小数値を入力
	scanf("%lf", &val2);
	//val1 > val2
	if (val1 > val2){
		diff = val1 - val2;
	}else{
		diff = val2 - val1;
	}

	//diff の値を小数第 3 位まで表示
	printf("2 つの値の差は %.3f です。\n", diff);





	return 0;
}
