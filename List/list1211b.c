/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 100

unsigned str_length(const char *pstr);

int main(void){

	char str[SIZE];

	printf("文字列を入力>"); scanf("%s", str);
	printf("文字列%sの長さは%uです。\n", str, str_length(str));

	return 0;
}

unsigned str_length(const char *pstr)
{
	unsigned len = 0;

	while (*pstr++ != '\0'){
		len++;
	}

	return len;
}
