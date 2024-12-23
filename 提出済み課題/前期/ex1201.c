/*
24EO0118 原田健司
*/

#include <stdio.h>
#define ROW 4
#define COL 5

int main(void){
	int i; //行のループカウント
	int j; //列のループカウント
	int sum[COL]={0}; //各学生の合計値を格納するため

//二次元配列の宣言と初期化 //値の変更を行う
	int score[ROW][COL]={
		{76, 53, 89, 53, 43},
		{32, 76, 42, 98, 12},
		{43, 79, 23, 85, 54},
		{76, 43, 98, 43, 42},
	};

//二次元配列scoreの走査を行う。
	for (i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++){
			//走査中の要素の値を整数四桁で出力する
			printf("%5d", score[i][j]);
		}
		putchar('\n');
	}

	puts("--------------------------");
	// printf("合計");
	//学生ごとに科目ごとの得点の合計を演算して出す。
	for(j = 0; j < COL; j++){
 //走査中の要素の値をsumの列に対応する要素へ合計する
		for(i = 0; i < ROW; i++){
			sum[j] += score[i][j]; //変更点
		}
		printf("%5d", sum[j]);
	}
	putchar('\n');

	//平均値を出力する。sumの走査をする。
	for(j = 0; j < COL; j++){
		//走査中のsumの要素を出力する
		printf("%5.1f", (double)sum[j] / ROW);
	}
	putchar('\n');

	return 0;
}
