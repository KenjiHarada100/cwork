/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <ctype.h>
#define SIZE 101

void strtolower(char s[]);

int main(void){
	char str[SIZE];
	printf("文字列を入力＞"); scanf("%s", str);

	strtolower(str);

	printf("tolower : %s\n", str);

	return 0;
}

void strtolower(char s[])
{
	int i = 0;

	while (s[i] != '\0'){
		s[i] = tolower(s[i]);
		i++;
	}
}
