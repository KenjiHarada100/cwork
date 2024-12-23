/*
24EO0118 原田健司
*/

#include <stdio.h>
#define ROW 2 //2行
#define COL 3 //３列

int main(void){
	int i; //行ループカウント
	int j; //列ループカウント

	int ary[ROW][COL];
	ary[0][0] = 5;
	ary[0][1] = 9;
	ary[0][2] = 15;
	ary[1][0] = 3;
	ary[1][1] = 7;
	ary[1][2] = 0;

	for(i = 0; i < ROW; i++){ //行のループ
		for(j = 0; j < COL; j++){ //列のループ
			printf("[%d][%d] : %2d  ", i, j, ary[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
