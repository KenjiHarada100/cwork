/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <string.h>

#define SIZE1 11
#define SIZE2 6

int main(void){
	char str1[SIZE1] = {'\0'};
	char str2[SIZE2] = {'\0'};

	printf("文字列を入力＞"); scanf("%s", str1);
	strncpy(str2, str1, SIZE2 - 1);

	printf("str2 : %s\n", str2);

	return 0;
}
