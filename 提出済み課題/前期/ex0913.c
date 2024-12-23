/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input_val;
int ans;
int input_cnt = 0;
int flag = 0;

int main(void){

	do{
	puts("■数当てゲーム■");
	srand(time(0));

	ans = rand() % 101;
	printf("%d\n", ans);
	puts("0～100の数字を入力しましょう");

	while(1){
		printf("数値を入力>"); scanf("%d", &input_val);
		input_cnt +=1;
		if(input_val > ans){
			printf("%dより低いです。\n", input_val);
		}else if(input_val < ans){
			printf("%dより高いです。\n", input_val);
		}else{
			break;
		}
	}
		puts("----------------------------------------------");
		printf("正解です！\nあなたは当てるまでに%d回かかりました。\n", input_cnt);
		puts("----------------------------------------------");
		puts("もう一度やりますか？（0:終了 1:チャレンジ)");
		printf("選択>"); scanf("%d",&flag);
	}while(flag);

	puts("");
	puts("処理を終了しました。");

	return 0;
}
