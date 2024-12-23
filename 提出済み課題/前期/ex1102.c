/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 6

int i;
int temp_val;
int sort_flg;
int	ary[LEN];
int aryi = 0; //乱数で得られる配列の値

int main(void){
	// printf("整数を入力してください。\n");
	// for(i = 0; i < LEN; i++){
	// 	printf("[%d] > ", i);
	// 	scanf("%d", &ary[i]);
	// }

	srand(time(0));

	for(i = 0; i < LEN; i++){
		aryi = rand() % 1000;
		ary[i] = aryi;
	}

	printf("ソート前 ");
	for(i = 0; i < LEN; i++){
		printf("[%d] : %3d  ", i, ary[i]);
	}

	putchar('\n');

	do {
		sort_flg = 0;
		for(i = 0; i < LEN -1; i++){
			if(ary[i] > ary[i+1]){
				temp_val = ary[i];
				ary[i] = ary[i+1];
				ary[i+1] = temp_val;
			sort_flg = 1;
			}
		}
	}while(sort_flg);

	printf("ソート後 ");
	for(i = 0; i < LEN; i++){
		printf("[%d] : %3d  ", i, ary[i]);
	}



	return 0;
}
