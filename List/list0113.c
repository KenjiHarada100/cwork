#include <stdio.h>

int main(void)
{
	//文字の変数vxを宣言
	char vx, vx2;

	//変数vxへ文字cを代入
	vx = 'c';
	vx2 = 'C';

	//変数vxを呼び出して値を表示
	printf("vxの値は%cです。\n", vx);
	printf("vxの値は%dです。\n", vx);
	printf("vx2の値は%dです。\n", vx2);

	return 0;
}
