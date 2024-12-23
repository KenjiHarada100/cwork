/*
24EO0118 原田健司
*/

#include <stdio.h>

	enum fruit{
		Apple,
		Orange,
		Banana
	};

int main(void){
	enum fruit va = Apple;
	enum fruit vb = 2;

	printf("Apple : %d\n", va);
	printf("Banana : %d\n", vb);

	return 0;
}
