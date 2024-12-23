/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
// 変数の宣言
	double va, vb;

	// ポインタの宣言
	double *pa = &va; // va を指すポインタ pa
	double *pb = &vb; // vb を指すポインタ pb

	// 各ポインタで間接参照を行い変数に値を代入
	*pa = 5.6; // pa の間接参照で va に 5.6 を代入
	*pb = 2.2; // pb の間接参照で vb に 2.2 を代入

	// va - vb の演算結果を表示
	printf("va - vb = %.2f\n", va - vb);

	return 0;
}
