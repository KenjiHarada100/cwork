#ifndef CTRL_ARRAY_H
#define CTRL_ARRAY_H

#include <stdio.h>

void print_array(int v[], int n);

void print_array(int v[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("[%d] : %d\n", i, v[i]);
	}
}

#endif
