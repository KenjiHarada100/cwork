/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int input_val;
	int sum = 0;
	//入力回数をcntと宣言
	int cnt;

/*	do{
		puts("入力した数の合計値と平均値を求めます。何回入力しますか？");
		printf("入力回数＞"); scanf("%d", &cnt);
		if (cnt == 0){
			puts("回数は１回以上にしましょう。");
		}
	}while(cnt < 1);*/

	while(1){
		puts("入力した数の合計値と平均値を求めます。何回入力しますか？");
		printf("入力回数＞"); scanf("%d", &cnt);
		if(cnt >= 1){
			break;
		}
		puts("回数は１回以上にしましょう。");
	}

	for(i=1; i <= cnt; i++){
		printf("%d回目を入力>", i);
		scanf("%d", &input_val);

		sum += input_val;

	}

	printf("合計 : %d 平均値 : %.2f" , sum, (double)sum / cnt);

	return 0;
}
