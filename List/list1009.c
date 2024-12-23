/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 101

int main(void){
	char str[SIZE];

	unsigned int len = 0;
	printf("文字列を入力＞"); scanf("%s", str);

	// while (str[len] != '\0'){
	while (str[len]){
		len++;
	}

	printf("文字列 %s の長さは %u 文字です。\n", str, len);

	return 0;
}
