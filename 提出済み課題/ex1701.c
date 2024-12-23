/*
24EO0118 原田健司
*/

#include <stdio.h>

// 関数形式マクロ
#define MINUS(x, y) (x - y)

int main(void)
{
	// 変数の宣言
	int ix = 10, iy = 2;
	double dx = 3.2, dy = 1.2;

	// 変数の演算を行う
	printf("(%d - %d) / (%.1f - %.1f) = %f\n", ix, iy, dx, dy, MINUS(ix, iy) / MINUS(dx, dy));

	return 0;
}
