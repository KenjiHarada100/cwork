/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
short int vc[4] = {10, 20, 30, 40};
// ポインタの宣言
short int *pt = vc;
// 配列を添字演算子で参照して出力
printf("vc[0]：%d (0x%p, %d byte)\n", vc[0], &vc[0], sizeof(vc[0]));
printf("vc[1]：%d (0x%p, %d byte)\n", vc[1], &vc[1], sizeof(vc[1]));
printf("vc[2]：%d (0x%p, %d byte)\n", vc[2], &vc[2], sizeof(vc[2]));
printf("vc[3]：%d (0x%p, %d byte)\n", vc[3], &vc[3], sizeof(vc[3]));
putchar('\n'); // 改行の出力
// 配列のアドレスの演算でポインタのように間接参照して出力
printf("*(vc + 0)：%d (0x%p, %d byte)\n", *(vc + 0), vc + 0, sizeof(*(vc + 0)));
printf("*(vc + 1)：%d (0x%p, %d byte)\n", *(vc + 1), vc + 1, sizeof(*(vc + 1)));
printf("*(vc + 2)：%d (0x%p, %d byte)\n", *(vc + 2), vc + 2, sizeof(*(vc + 2)));
printf("*(vc + 3)：%d (0x%p, %d byte)\n", *(vc + 3), vc + 3, sizeof(*(vc + 3)));

	return 0;
}
