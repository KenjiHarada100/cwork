/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 21

int main(void){
	char str[SIZE];
	// int i;

	printf("文字列の入力＞"); fgets(str, SIZE, stdin);

	// for (i = 0; i < SIZE; i++){
	// 	if (str[i] == '\n')
	// 	{
	// 		str[i] = '\0';
	// 		break;
	// 	}
	// }

	printf("入力した文字列は「%s」です。\n", str);

	return 0;
}
