/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;

	char str[] = "ABC";

	char *ptr = "123";

	for (i = 0; str[i] != '\0'; i++){
		putchar(str[i]);
	}

	putchar('\n');

	for (i = 0; ptr[i] != '\0'; i++){
		putchar(ptr[i]);
	}

	putchar('\n');

	printf("str : %s\n", str);
	printf("ptr :  %s\n", ptr);

	return 0;
}
