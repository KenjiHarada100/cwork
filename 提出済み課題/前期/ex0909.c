/*
24EO0118 原田健司
*/

#include <stdio.h>

int input_val;
int sum = 0;
int sum_cnt = 0;
//入力した数値の数をカウントするため整数値を宣言
int i;

int main(void){

	puts("入力した数の合計値を求めます。");
	while(1){
		printf("数値を入力>"); scanf("%d", &input_val);
		sum += input_val;
		i += 1;

		if (sum > 800){
			puts("入力した値を足すと合計値が800を超えるので処理を終了します。");
			break;
		}

		if(input_val <= -1){
			puts("マイナスの値が入力されたので処理を終了します。");
			break;
		}
	}

	printf("%d 個の数の合計値は %d です。", i-1, sum - input_val);

	return 0;
}
