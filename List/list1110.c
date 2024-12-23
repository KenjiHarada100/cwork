/*
24EO0118 原田健司
*/

#include <stdio.h>

void get_sum_diff(int na, int nb, int *psum, int *pdiff);

int main(void){

	int va, vb, sum, diff;

	puts("2つの整数を入力してください。");
	printf("整数va>"); scanf("%d", &va);
	printf("整数vb>"); scanf("%d", &vb);

	get_sum_diff(va, vb, &sum, &diff);

	printf("sum : %d\n", sum);
	printf("diff : %d\n", diff);

	return 0;
}

void get_sum_diff(int na, int nb, int *psum, int *pdiff){
	// int temp = *nx;

	*psum  = na + nb;
	*pdiff = na - nb;
}
