/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	//整数型の変数を宣言
	int rand_num;
	double rand_dnum;

	//乱数の初期化
	srand(time(0));
	printf("生成したtime(0)は%ldです。\n", time(0));

	//０-９の乱数を生成してrand_numへ代入
	rand_num = rand();
	printf("生成した数は%dです。\n", rand_num);
	rand_num = rand() % 10; //0-9までの１０種類の数を生成する

	//生成した乱数を表示
	printf("生成した数は%dです。\n", rand_num);

	rand_num = (rand() % 1000);
	printf("生成した数は%dです。\n", rand_num);
	rand_num = rand_num / 10;

	rand_dnum = (double)(rand() % 1000) / 10;
	printf("生成した数は%.1fです。\n", rand_dnum);

	return 0;
}
