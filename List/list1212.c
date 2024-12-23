/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <string.h>

#define SIZE 101

int main(void){

	char str[SIZE];
	printf("文字列を入力＞"); scanf("%s", str);

	printf("入力した文字は%d文字です。\n", strlen(str));


	return 0;
}
