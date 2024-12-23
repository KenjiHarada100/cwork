/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <ctype.h>
#define SIZE 101

void strtoupper(char s[]);

int main(void){
	char str[SIZE];
	printf("文字列を入力＞"); scanf("%s", str);

	strtoupper(str);

	printf("変換結果 : %s\n", str);

	return 0;
}

void strtoupper(char s[])
{
	int i = 0;

	while (s[i] != '\0'){
		s[i] = toupper(s[i]);
		i++;
	}
}
