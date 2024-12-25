/*
24EO0118 原田健司
*/

#include <stdio.h>

#define SIZE 101

void str_copy(char *pstr1, char *pstr2);

int main(void){
	char str1[SIZE] = {"\0"};
	char str2[SIZE] = {"\0"};

	printf("文字列の入力>"); scanf("%s", str1);

	str_copy(str1, str2);

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	return 0;
}

void str_copy(char *pstr1, char *pstr2)
{
	do{
		*pstr2 = *pstr1;
		pstr1++;
		pstr2++;
	}while(*pstr1 != '\0');
}
