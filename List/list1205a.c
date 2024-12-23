/*
24EO0118 原田健司
*/

#include <stdio.h>
void set_val(int vc[], int no);
void print_array(int vc[], int no);

int main(void){
	#define LEN 4
	int array[LEN] = {10, 20, 30, 40};

	set_val(array, LEN);

	print_array(array, LEN);

	return 0;
}

void set_val(int vc[], int no)
{
	int i;
	for (i = 0; i < no; i++){
		vc[i] = 0;
	}
}

void print_array(int vc[], int no)
{
	int i;
	for (i = 0; i < no; i++){
		printf("vc[%d] : %d\n", i, vc[i]);
	}
}
