/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 7

int main(void){
	int i, length;

	char strs[][SIZE] = {"apple", "banana"};

	length = sizeof(strs) / sizeof(strs[0]);

	for (i = 0; i < length; i++){
		printf("[%d] : %s\n", i, strs[i]);
	}

	printf("strs[0][3]: %c\n", strs[0][3]);

	return 0;
}
