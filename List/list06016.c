/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 3

int array_sumof(int v[], int n);
void print_array(int v[], int n);

int main(void){
		int vals[LEN] = {54, 32, 79};

		int sum;

		print_array(vals, LEN);
		sum = array_sumof(vals, LEN);

		printf("合計値: %d\n", sum);

	return 0;
}

int array_sumof(int v[], int n)
{
	int i, s = 0;
	for(i = 0; i < n; i++)
	{
		s += v[i];
	}

	return s;
}

void print_array(int v[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("[%d] : %d\n", i, v[i]);
	}
}
