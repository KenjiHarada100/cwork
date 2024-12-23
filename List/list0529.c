#include <stdio.h>
#define ROW 2 // 行(Row)の要素数
#define COL 3 // 列(Column)の要素数

int main(void)
{
	// 変数の宣言
	int i; // 行ループカウント
	int j; // 列ループカウント

	// 整数型の2次元配列を宣言
	int ary[ROW][COL] =  {{5, 9, 15}, {3, 7, 0}};

	// ary[1][0] + ary[1][1]の演算結果をary[1][2]に代入
	ary[1][2] = ary[1][0] + ary[1][1];

	// 2次元配列aryの走査(2連ループを利用する)
	for (i = 0; i < ROW; i++) { // 行の要素数分でループ
		for (j = 0; j < COL; j++) {
			// 走査中の要素の添字と代入されている値を出力
			printf("[%d][%d]: %d ", i, j, ary[i][j]);
		}

		putchar('\n');
	}

	return 0;
}
