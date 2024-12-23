/*
24EO0118 原田健司
*/

#include <stdio.h>

void sort(int *px, int *py, int *pz);
void swap(int *nx, int *ny);

int main(void){

	int n1, n2, n3;

	puts("3つの整数を入力してください。");
	printf("整数n1>"); scanf("%d", &n1);
	printf("整数n2>"); scanf("%d", &n2);
	printf("整数n3>"); scanf("%d", &n3);

	sort(&n1, &n2, &n3);

	puts("3つの値を昇順に並べました。");
	printf("n1 : %d\n", n1);
	printf("n2 : %d\n", n2);
	printf("n3 : %d\n", n3);

	return 0;
}

void sort(int *px, int *py, int *pz){
	if (*px <= *py){
		swap(px, py);
	}
	printf("px : %d py : %d\n", *px, *py);
	if (*px <= *pz){
		swap(px, pz);
	printf("px : %d pz : %d\n", *px, *pz);
	}
	if (*py <= *pz){
		swap(py, pz);
	printf("py : %d pz : %d\n", *py, *pz);
	}
}

void swap(int *nx, int *ny){
	int temp = *nx;
	*nx = *ny;
	*ny = temp;
}
