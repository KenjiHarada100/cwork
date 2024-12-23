#include <stdio.h>

int main(void)
{
	//文末で自動的に改行を行い文字列の出力をする。
	puts("こんにちは。");
	puts("今日は暖かいです。");

	//printf関数を用いると自動的に改行されない。
	printf("こんにちは。");
	printf("今日は暖かいです。");

	return 0;
}
