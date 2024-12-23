/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	//変数r, pi, areaを宣言
	int r;
	double pi = 3.14;
	double area;

	//変数rに整数を入力
	printf("円の半径r[m]を整数で入力＞");
	scanf("%d", &r);

	//円の面積を演算して変数areaに代入（円周率は変数piを使う）
	area = pi * r * r;

	if (r > 0){ //半径が0より大きいなら
		//実行結果と同じように半径rと面積areaを表示する
		printf("半径%d[m]の円の面積は、%.2f[㎡]です。\n", r, area);
	}else{
		printf("半径が0[m]以下なので計算できませんでした。\n");
	}
}
