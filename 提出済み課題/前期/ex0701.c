/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int hour;

	printf("時間を入力＞"); scanf("%d", &hour);

	if(hour >= 4 && hour <= 9){
		puts("おはようございます！");
	}else if(hour >= 10 && hour <= 17){
		puts("こんにちは。");
	}else{
		puts("こんばんは。");
	}

	return 0;
}
