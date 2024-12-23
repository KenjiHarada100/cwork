/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int times;

	printf("回数を入力してください："); scanf("%d", &times);

	for(i = 0; i < times; i++){

		if (i % 2 == 0){
			printf("o");
		}else{
			printf("×");
		}
	}

	return 0;
}
