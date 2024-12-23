//24EO0118  原田健司

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int i;
	double rand_val;

	//乱数の初期化
	srand(time(0));

	for( i=0; i < 10; i++){
		rand_val = (double)(rand() % 100000) / 100;
		printf("%2d回目：%6.2f\n", i+1, rand_val);
	}

	return 0;
}
