/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <string.h>
#define SIZE 11

int main(void){
	char str1[SIZE];
	char str2[SIZE];

	puts("比較を行う文字列を入力しましょう。");
	printf("str1>"); scanf("%s", str1);
	printf("str2>"); scanf("%s", str2);

	if (strcmp(str1, str2) == 0)
	{
		puts("str1とstr2は同じ文字列です。");
	}else{
		puts("str1とstr2は異なる文字列です。");
	}

	return 0;
}
