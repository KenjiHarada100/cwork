/*
24EO0118 原田健司
*/

#include <stdio.h>
#include "array.h"
#define LEN 5

void print_array(int v[], int n);

int main(void){

	int va[LEN] = {32, 54, 21, 87, 46};

	print_array(va, LEN);

	return 0;
}