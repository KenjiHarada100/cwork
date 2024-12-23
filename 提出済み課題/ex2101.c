/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	// 配列の宣言
	double va[] = {2.3, 5.3, 3.2, 6.4, 9.9};

	// ポインタの宣言
	double *pa = va; // va を指すポインタ pa
	// ポインタ pa の間接参照で va[3]の要素を表示
	printf("va[3] : %.1f\n", *(pa + 3));

	return 0;
}
