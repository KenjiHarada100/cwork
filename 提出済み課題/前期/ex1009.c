//24EO0118  原田健司

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LEN 10

int main(void){
	srand(time(0));
	int random;
	int i;
	int temp_val;
	int sort_flag;
	int var[LEN];

	for(i = 0; i < LEN; i++){
		random = rand();
		var[i] = random % 1000;
	}

	printf("■並べ替え前■\n");
	for(i = 0; i < LEN; i++){
		printf("var[%d] : %d\n", i, var[i]);
	}

	do{
		sort_flag = 0;
		for(i = 0; i < LEN -1; i++){
			if(var[i] > var[i + 1]){
				temp_val = var[i];
				var[i] = var[i + 1];
				var[i + 1] = temp_val;

				sort_flag = 1;
			}
		}
	}while(sort_flag);

	printf("\n");

	printf("■並べ替え後■\n");
	for(i = 0; i < LEN; i++){
		printf("var[%d] : %d\n", i, var[i]);
	}

	printf("\n");

	return 0;
}
