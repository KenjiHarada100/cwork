/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//変数 score を宣言
	int score;
	//「テストの点数を入力>」と表示
	printf("テストの点数を入力>");
	scanf("%d", &score);
	if (score >= 90){
		//「評価は A です。」と表示
		printf("評価は A です。\n");
	}else if(score >= 75){
		//「評価は B です。」と表示
		printf("評価は B です。\n");
	}else if(score >= 60){
		//「評価は C です。」と表示
		printf("評価は C です。\n");
	}else{
		printf("評価は D です。\n");
	}


	return 0;
}
