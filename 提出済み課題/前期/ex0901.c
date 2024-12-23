/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int input_val;
	int sum = 0;

	puts("入力した５つの数の合計値を求めます。");

	for(i=1; i <=5; i++){
		printf("%d回目を入力＞", i);
		scanf("%d", &input_val);

		sum += input_val;

	}

	printf("合計 : %d", sum);

	return 0;
}
