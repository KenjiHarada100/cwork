/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//整数型の変数rを宣言
	int r; //入力用

	//変数rへ整数を入力
	printf("整数を入力＞");
	scanf("%d", &r);

	if ( r > 0){//rが0よりも大きければ
		//入力した数は0より大きいです。を表示
		printf("入力した数は0より大きいです。\n");
	}else{
		//入力した数は0以下です。を表示
		printf("入力した数は0以下です。\n");
	}

	return 0;
}
