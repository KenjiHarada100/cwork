/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 4

// void print_value(int ary[], int no);
void set_value(int ary[], int no);
void print_value(int ary[], int no);

int main(void){
	const int vals[] = {1, 2, 3, 4};
	set_value(vals, LEN);
	print_value(vals, LEN);

	return 0;
}

void set_value(int ary[], int no)
{
	int i;
	for(i = 0; i < no; i++)
	{
		ary[i] = 8;
	}

}

void print_value(int ary[], int no)
{
	int i;
	for(i = 0; i <no; i++)
	{
		printf("%d/", ary[i]);
	}

}
