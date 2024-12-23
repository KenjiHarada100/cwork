/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	char str1[] = {'a', 'b', 'c', '\0'};
	char str2[] = "abc"; // 文字列リテラル"abc"で初期化

	str1[2] = 'x';

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	return 0;
}
