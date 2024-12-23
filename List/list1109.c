/*
24EO0118 原田健司
*/

#include <stdio.h>

void swap(int *nx, int *ny);

int main(void){

	int n1, n2;

	puts("2つの整数を入力してください。");
	printf("整数n1>"); scanf("%d", &n1);
	printf("整数n2>"); scanf("%d", &n2);

	swap(&n1, &n2);

	puts("n1とn2の値を交換しました。");
	printf("n1 : %d\n", n1);
	printf("n2 : %d\n", n2);

	return 0;
}

void swap(int *nx, int *ny){
	int temp = *nx;

	*nx = *ny;
	*ny = temp;
}
