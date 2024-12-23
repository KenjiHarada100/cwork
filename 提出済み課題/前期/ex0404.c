/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	//整数型変数 val1, val2, min_valを宣言
	int val1, val2, min_val;

	//変数val1,val2に整数を入力
	printf("２つの整数を入力して下さい。\n");
	printf("val1 = "); scanf("%d", &val1);
	printf("val2 = "); scanf("%d", &val2);

	//変数同士を比較する
	if (val1 < val2){
		min_val = val1;
	}else{
		min_val = val2;
	}

	//小さいほうの値を出力する
	printf("小さいほうの値は%dです。", min_val);

}
