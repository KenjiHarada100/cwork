/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 5

void array_avg(int [], int);

int main(void){
	int va[LEN] = {10, 43, 12, 42, 67};

	// array_avg 関数の呼び出し
	array_avg(va, LEN);

	return 0;
}

void array_avg(int v[], int no)
{
	int i;
	int sum = 0;

	for (i = 0; i < LEN; i++){
		sum += v[i];
	}

	printf("avg : %.2f", (double)sum / LEN);

}
