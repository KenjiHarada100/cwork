/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 5

double array_avg(int [], int);

int main(void){
	int va[LEN] = {10, 43, 12, 42, 67};

	printf("avg : %.2f", array_avg(va, LEN));

	return 0;
}

double array_avg(int v[], int no)
{
	int i;
	int sum = 0;
	double avg;

	for (i = 0; i < LEN; i++){
		sum += v[i];
	}

	avg = (double)sum / LEN;

	return avg;
}
