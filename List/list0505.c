/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int vals[2];

	int max;

	puts("２つの整数を入力してください。");
	printf("vals[0]>"); scanf("%d", &vals[0]);
	printf("vals[1]>"); scanf("%d", &vals[1]);

	if (vals[0] > vals[1]){
		max = vals[0];
	}else{
		max = vals[1];
	}

	printf("大きいほうの値は%dです。\n", max);


	return 0;
}
