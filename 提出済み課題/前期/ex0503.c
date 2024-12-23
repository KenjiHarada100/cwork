/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//変数 val1, val2 を宣言
	int val1, val2;
	//変数 ave を宣言し 0 で初期化
	double ave = 0;

	//「2 つの整数を入力してください。」と表示
	printf("2 つの整数を入力してください。\n");
	//「val1>」と表示
	printf("val1>");
	scanf("%d", &val1);
	if (val1 == 0){
		//「0 以外の数を入力してください。」と表示
		printf("0 以外の数を入力してください。");
	}else{
		//「val2>」と表示
		printf("val2>");
		scanf("%d", &val2);
		if (val2 == 0){
			//「0 以外の数を入力してください。」と表示
			printf("0 以外の数を入力してください。");
		}else{
		//val1 と val2 の平均値演算して変数 ave に代入
		ave = (double)(val1+val2) / 2;
		//ave を小数第 1 位まで表示
		printf("val1 と val2 の平均値は、%.1fです。\n", ave);
	}

	return 0;
	}
}
