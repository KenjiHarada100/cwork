/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 11

int main(void){
	char str_ja[SIZE] = "こんにちは";
	char char_ja[3] = "\0";

	char_ja[0] = str_ja[4];
	char_ja[1] = str_ja[5];

	printf("str_ja の３文字目は「%s」です。\n", char_ja);

	return 0;
}
