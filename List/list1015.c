/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <string.h>
#define SIZE 21

int main(void){
	char str1[SIZE] = "hello";
	char str2[SIZE] = "world";
	char str3[SIZE];


	strcat(str1, str2);
	printf("str1 : %s", str1);

	printf("文字数：%d文字\n", strlen(str1));

	printf("文字列を入力＞"); scanf("%s", str3);

	if (strcmp(str1, str3) == 0)
		puts("入力した文字列とstr1が一致しました。\n");
	else
		puts("入力した文字列とstr1は一致しません。\n");





	return 0;
}
