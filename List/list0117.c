#include <stdio.h>

int main(void)
{
	//整数型の変数の宣言
	int vx;
	double vy;
	char vz;

	//変数へ代入した値を出力
	printf("vxの値は%pです\n", &vx);
	printf("vyの値は%pです\n", &vy);
	printf("vzの値は%pです\n", &vz);

	// 変数vx, vy,vzのサイズを出力
	printf("int型変数vxのサイズは%d Byte\n", sizeof(vx));
	printf("double型変数vyのサイズは%d Byte\n", sizeof(vy));
	printf("char型変数vzのサイズは%d Byte\n", sizeof(vz));

	return 0;
}

/*========
実行結果
========
vxの値は0019FEF8です
vyの値は0019FEF0です
vzの値は0019FEEFです
int型変数vxのサイズは4 Byte
double型変数vyのサイズは8 Byte
char型変数vzのサイズは1 Byte
*/
