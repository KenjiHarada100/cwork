/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	//整数型変数 val1, val2, val3, val4, min_valを宣言
	int val1, val2, val3, val4, min_val;

	//変数val1,val2, val3, val4に整数を入力
	printf("4つの整数を入力して下さい。\n");
	printf("val1 = "); scanf("%d", &val1);
	printf("val2 = "); scanf("%d", &val2);
	printf("val3 = "); scanf("%d", &val3);
	printf("val4 = "); scanf("%d", &val4);

	//仮にval1を最小値として設定する
	min_val = val1;

	//if文で１つひとつ比べていく。
	if (min_val > val2){
		min_val = val2;
	}

	if (min_val > val3){
		min_val = val3;
	}

	if (min_val > val4){
		min_val = val4;
	}

	//最小値を出力する
	printf("最小値は%dです。", min_val);

}
