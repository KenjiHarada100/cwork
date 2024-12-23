/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int score;

	printf("テストの点数を入力＞"); scanf("%d", &score);

	if (score > 90){
		puts("評価はSです。\n");
	}else if (score > 80){
		puts("評価はAです。\n");
	}else if (score > 70){
		puts("評価はBです。\n");
		}else if (score > 60){
		puts("評価はCです。\n");
	}else{
		puts("評価はDです。\n");
	}

	return 0;
}
