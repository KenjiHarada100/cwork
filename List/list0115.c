#include <stdio.h>

int main(void)
{
	//整数型の変数の宣言と初期化
	int va = 31;
	int vb = va + 12;

	//vaに60を代入する
	va = 60;

	//変数へ代入した値を出力
	printf("vaの値は%dです\n", va);
	printf("vbの値は%dです\n", vb);

	return 0;
}
