/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10

void rand_array(int [], int, int),;
void print_array(int [], int);

int main(void){
	int ary[LEN];

	rand_array(ary, LEN);
	print_array(ary, LEN);

	return 0;
}

void rand_array(int ary[], int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		ary[i] = 0; // 0を代入して初期化する。
	}

	srand(time(0));
	for (i = 0; i < len; i++){
		ary[i] = rand() % 1000; // 0-999の乱数を生成する
	}
}

void print_array(int ary[], int len)
{
	int i;
	for (i = 0; i < len; i++){
		printf(("[%d] : %d\n"), i, ary[i]);
	}
}
