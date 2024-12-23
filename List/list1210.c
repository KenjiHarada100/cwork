/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	char *ptr = "ABC";

	ptr[1] = 'X';
	printf("%s\n", ptr);

	return 0;
}
