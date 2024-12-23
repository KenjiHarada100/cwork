/*
24EO0118 原田健司
*/

#include <stdio.h>

int minof(int na, int nb);

int main(void){
	int va, vb, min;
	puts("２つの整数を入力してください。\n");
	printf("va>"); scanf("%d", &va);
	printf("vb>"); scanf("%d", &vb);

	min = minof(va, vb);
	printf("小さい方の値は%dです。", min);

	return 0;
}

int minof(int na, int nb)
{
	int min;

	if(na < nb){
		min = na;
	} else {
		min = nb;
	}

	return min;
}
