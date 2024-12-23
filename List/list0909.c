/*
24EO0118 原田健司
*/

#include <stdio.h>

enum fruit {
	Apple,
	Orange,
	Banana,
	Lemon = 5,
	Grape
};

int main(void){
	printf("Apple	: %d\n", Apple);
	printf("Orange	: %d\n", Orange);
	printf("Banana	: %d\n", Banana);
	printf("Lemon	: %d\n", Lemon);
	printf("Grape	: %d\n", Grape);

	return 0;
}
