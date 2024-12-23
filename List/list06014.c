/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN_A 5
#define LEN_B 7

void print_array(int v[], int n);

int main(void){
	int va[LEN_A] = {32, 54, 21, 87, 46};
	int vb[LEN_B] = {100, 312, 567, 234, 678, 754, 987};


	print_array(va, LEN_A);
	puts("");
	print_array(vb, LEN_B);

	return 0;
}

void print_array(int v[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("[%d] : %d\n", i, v[i]);
	}
}

//*(v+1) ポインタの関節参照
//v[i] 配列の参照要素
