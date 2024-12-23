/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <string.h>

#define SIZE 11

int main(void){
	char str1[SIZE] = "Java";
	char str2[SIZE] = "Script";

	strcat(str1, str2);

	printf("str1 : %s", str1);

	return 0;
}
