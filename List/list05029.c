/*
24EO0118 原田健司
*/

#include <stdio.h>
#define ROW 2 //2行
#define COL 3 //３列

int main(void){
	int i; //行ループカウント
	int j; //列ループカウント

	// 整数型の 2 次元配列を宣言して初期化（要素数は ROW と COL で指定）
	int ary[ROW][COL] = {{5, 9, 15},
											 {3, 7, 0}};

	for(i = 0; i < ROW; i++){ //行のループ
		for(j = 0; j < COL; j++){ //列のループ
			printf("[%d][%d] : %2d  ", i, j, ary[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
