/*
24EO0118 原田健司
*/

#include <stdio.h>

	typedef enum fruit Fruit;

	enum fruit{
		Apple,
		Orange,
		Banana
	};

int main(void){
	Fruit va = Apple;
	Fruit vb = 2;

	printf("Apple : %d\n", va);
	printf("Banana : %d\n", vb);

	return 0;
}
