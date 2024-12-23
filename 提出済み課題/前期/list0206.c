#include <stdio.h>

int main(void)
{

	//変数を宣言して初期化
	int a = 1;
	double b = 2.2;
	int c = 88;

	//A 0詰め３桁出力
	printf("a %03d\n", a);
	printf("a %03d\n", a * 10);
	printf("a %03d\n", a *100);

	//Ｂ　３桁出力
	printf("b [%3d]\n", a);
	printf("b [%-3d]\n", a);

	//C　小数設定なし出力
	printf("C %f\n", b);

	//ｄ　小数第一位まで出力
	printf("d %.1f\n", b);

	//e　16進数を出力
	printf("e %x\n", c + 2);

	//f　16進数に0ｘを追加して出力
	printf("f %#x\n", c + 2);

	//g　16進数に0Xを追加して出力
	printf("f %#X\n", c + 2);

	//h フィールド幅と桁数指定
	printf("h [%6.1f]\n", 12.13);
	printf("h [%06.1f]\n", 12.13);

	//i アドレスを0ｘをつけて出力
	printf("i 0x%p\n", &a);

	return 0;
}
