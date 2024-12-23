/*
24EO0118 原田健司
*/

#include <stdio.h>
// 配列の要素数を指定
#define LEN 5

// array_sumof関数のプロトタイプ宣言
void array_sumof(int *vc, int no, int *psum);

int main(void){
	// 配列の宣言
	int ary[LEN];

	// 変数の宣言
	int i, sum = 0;

	// 各要素へ入力
	printf("整数を%d 回入力してください。\n", LEN);

	for (i = 0; i < LEN; i++) {
	// キーボード入力した値を配列 ary の各要素へ代入
		printf("[%d]> ", i);
		scanf("%d", &ary[i]);
	}

	// array_sumof 関数を呼び出して ary の合計を計算する
	array_sumof(ary, LEN, &sum);

	// 合計の表示
	printf("合計 : %d\n", sum);

	return 0;
}

// ポインタ vc が指す配列の合計値を求めポインタ psum で返す関数
void array_sumof(int *vc, int no, int *psum)
{
	int i;
	for (i = 0; i < no; i++) {
		// 配列の各要素をポインタ psum が指す変数（sum）に加算
		*psum += *(vc + i);
	}
}
