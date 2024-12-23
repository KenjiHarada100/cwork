/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 5

int main(void){

	int va[LEN] = {10, 20, 30, 40, 50};
	int sum = 0;
	for (i = 0; i < LEN; i++){
		sum += va[i];
	}
	// sum = va[0]+va[1]+va[2]+va[3]+va[4];
	printf("配列vaの各要素の合計値は:%dです。\n", sum);
	// printf("[1]:%d\n", va[1]);
	// printf("[2]:%d\n", va[2]);
	// printf("[3]:%d\n", va[3]); //間違い
	// printf("[4]:%d\n", va[4]); //間違い

	return 0;
}
