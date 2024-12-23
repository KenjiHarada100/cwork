/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 21

int main(void){
	char str[SIZE];

	printf("文字列の入力＞"); fgets(str, SIZE, stdin);
	printf("入力した文字列は「%s」です。\n", str);

	return 0;
}
