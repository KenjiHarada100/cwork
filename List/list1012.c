/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <ctype.h>
#define SIZE 101

int main(void){
	char str[SIZE];
	printf("文字れつを入力＞"); scanf("%s", str);
	str[0] = tupper(str[0]);

	str[1] = tolower(str[1]);

	printf("変換結果 : %s\n", str);

	return 0;
}
