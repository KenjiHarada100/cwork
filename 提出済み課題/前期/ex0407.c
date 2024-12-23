/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	//整数型変数 val,val100を宣言
	int val, val100;

	//変数valに三桁の整数を入力

	printf("３桁の整数を入力＞");
	scanf("%d", &val);

	//入力された値が三桁でなければ、再入力を促す。
	while(val > 1000 || val < 99){
		printf("3桁の整数を入力しましょう。\n");
		scanf("%d", &val);
	}

	//百の位を求めるために１００で割る。
	val100 = val / 100;

	printf("入力した%dの百の位の数は%dです。\n", val, val100);

}
