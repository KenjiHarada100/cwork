/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

int main(void){
	char str[SIZE];

	printf("文字列を入力＞"); scanf("%s", str);

	printf("文字列として出力　：%s\n", str);

	printf("int型として出力　：%d\n", atoi(str));
	printf("long型として出力　：%ld\n", atol(str));
	printf("atoi(str) + 100 = %d\n", atoi(str) + 100);

	return 0;
}
