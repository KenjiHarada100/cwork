/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//整数型の変数の宣言
	int x;

	//変数ｘに整数を入力
	printf("整数を入力＞"); scanf("%d", &x);

	if(x <= 99 || x >= 1000){ //ｘが99以下、1000以上なら
		puts("入力した数は三桁の整数ではないです。\n");
	}else{ //条件が成り立たないなら
		puts("入力した数は三桁の整数です。\n");
	}

	return 0;
}
