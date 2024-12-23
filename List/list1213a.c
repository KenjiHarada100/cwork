/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <string.h>

#define SIZE 11

int main(void){
	char str1[SIZE] = {'\0'};
	char str2[SIZE] = {'\0'};

	printf("文字列を入力＞"); scanf("%s", str1);
	strcpy(str2, str1);

	printf("str2 : %s\n", str2);

	return 0;
}
