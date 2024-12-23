/*
24EO0118 原田健司
*/

#include <stdio.h>
#define STEPS 4

int main(void){
	int i;
	char signal_a[STEPS] = {0, 0, 1, 1};
	char signal_b[STEPS] = {0, 1, 0, 1};
	char signal_s, signal_c;

	puts("A B | S C\n---------------");

	for (i = 0; i < STEPS; i++){
		signal_s = (signal_a[i] | signal_b[i]) & ~(signal_a[i] & signal_b[i]);
		signal_c = signal_a[i] & signal_b[i];

		printf("%1d %1d | %1d %1d\n", signal_a[i], signal_b[i], signal_s, signal_c);
	}

	return 0;
}
