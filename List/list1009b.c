/*
24EO0118 原田健司
*/


#include <stdio.h>
#define SIZE 101

unsigned int str_len(char s[]);

int main(void){
	char str[SIZE];

	printf("文字列を入力＞"); scanf("%s", str);

	printf("文字列 %s の長さは %u 文字です。\n", str, str_len(str));

	return 0;
}

unsigned int str_len(char str[]){
// unsigned int str_len(char *str){
	unsigned int len = 0;

	// while (str[len] != '\0'){
	while (str[len]){
		len++;
	}

	return len;
}
