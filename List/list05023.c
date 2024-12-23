/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 6

int main(void){
	int i; //ループカウント
	int temp_val; //入れ替えた値を一時的に格納する変数
	int sort_flg; //ソート実行フラグ（次回も入れ替えを続けるか否か）

	//整数型の配列を宣言
	int va[LEN] = {64, 42, 20, 90, 14, 52};

	do{
		sort_flg = 0; //最初はNOの状態でフラグを初期化する。
		for(i = 0; i < LEN-1; i++){
			if(va[i] > va[i+1]){ //昇順にソートする（小さいほうから大きいほうへ）
				temp_val = va[i];
				//走査中の要素が1つ右隣の要素の値より大きければ要素同士を入れ替える。
				va[i] = va[i+1];
				va[i+1] = temp_val;
				sort_flg = 1;
			}
		}
	}while(sort_flg); //for文中で一回でも入れ替えを行っている場合はループを続ける。

	for(i=0; i <LEN; i++){
		printf("[%d] : %d ", i, va[i]);
	}

	putchar('\n');

	return 0;
}
