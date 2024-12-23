/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 11

int main(void){
	char str1[SIZE];
	char str2[SIZE];

	// int i;

	printf("文字列の入力＞"); fgets(str1, SIZE, stdin);
	fflush(stdin);
	printf("文字列の入力＞"); fgets(str2, SIZE, stdin);
	fflush(stdin);


	// for (i = 0; i < SIZE; i++){
	// 	if (str[i] == '\n')
	// 	{
	// 		str[i] = '\0';
	// 		break;
	// 	}
	// }

	printf("入力した文字列は「%s」です。\n", str1);
	printf("入力した文字列は「%s」です。\n", str2);

	return 0;
}
