/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 4

void set_value(int ary[], int no);
void print_array(int ary[], int no);

int main(void){

	int vals[] = {23, 78, 52, 10};

	set_value(vals, LEN);
	print_array(vals, LEN);

	return 0;
}

void set_value(int ary[], int no)
{
	int i;
	for (i = 0; i < no; i++)
	{
		ary[i] = 8;
	}
}

void print_array(int ary[], int no)
{
	int i;
	for(i = 0; i < no; i++)
	{
		printf("%d/", ary[i]);
	}
}
