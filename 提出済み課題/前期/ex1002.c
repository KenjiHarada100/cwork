/*
24EO0118 原田健司
*/
#include <stdio.h>

int main(void){

	int input_ary[3];
	int sum;

	puts("３つの整数を入力してください");
	printf("[%d]> ", 0); scanf("%d", &input_ary[0]);
	printf("[%d]> ", 1); scanf("%d", &input_ary[1]);
	printf("[%d]> ", 2); scanf("%d", &input_ary[2]);

	sum = input_ary[0]+input_ary[1]+input_ary[2];

	printf("３つの値の合計は%dです。\n", sum);

	return 0;
}
