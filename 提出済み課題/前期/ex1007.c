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
	int copy_ary[LEN];

	for(i = 0; i < LEN; i++){
		random = rand();
		ary[i] = random % 100;
		copy_ary[i] = ary[i];
	}

	for(i = 0; i < LEN; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
	}

	printf("\n");

	for(i = 0; i < LEN; i++){
		printf("copy_ary[%d] : %d\n", i, copy_ary[i]);
	}

	return 0;
}
