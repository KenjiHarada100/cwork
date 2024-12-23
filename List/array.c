#include <stdio.h>
#include "array.h" //追記する

void print_array(int v[], int n)
{
	int i;

	for(i = 0; i < n; i++){
		printf("[%d] : %d\n", i, v[i]);
	}
}
