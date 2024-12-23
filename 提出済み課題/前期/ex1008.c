//24EO0118  原田健司

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LEN 6

int main(void){
	srand(time(0));
	int random;
	int i;
	int ary[LEN];
	int reverse_ary[LEN];

	for(i = 0; i < LEN; i++){
		random = rand();
		ary[i] = random % 100;
		reverse_ary[LEN - 1 - i] = ary[i];
	}

	for(i = 0; i < LEN; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
	}

	printf("\n");

	for(i = 0; i < LEN; i++){
		printf("reverse_ary[%d] : %d\n", i, reverse_ary[i]);
	}

	return 0;
}
