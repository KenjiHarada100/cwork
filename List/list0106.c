#include <stdio.h>

int main(void)
{
	//二つの計算結果を出力
	printf("15 と 8 の和は %d で差は %d になります。\n", 15 + 8, 15 - 8);

	//拡張表記　\" と書くと"を表現できる。
	printf("\"15 と 8\" の和は %d で \n1.3 と 2.5 の和は %.1f に\tなります。\\\n", 15 + 8, 1.3 + 2.5);

	//拡張表記
	printf("Hello\tWorld!");
}