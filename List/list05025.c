/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 6

int main(void){
	int i;
	int temp_val;
	int max_index;
	int last_index;

	int va[LEN] = {64, 42, 20, 90, 14, 52};
	last_index = LEN - 1; //6-1= 5

	while(last_index > 0){

		max_index = 0; //最大値を持つ要素を配列vaの先頭の要素[0]で初期化する。
		for(i =1; i <= last_index; i++){ //last_indexは５だから<=
		// i = 1からループを始めるの は va[0]を最大値を持つ要素として初期化したため
			if (va[i] > va[max_index]){
				max_index = i;
			}
		}

		temp_val = va[last_index];
		va[last_index] = va[max_index];
		va[max_index] = temp_val;

		last_index--;
	}

	for(i = 0; i < LEN; i++){
		printf("[%d] : %d ", i, va[i]);
	}
	putchar('\n');

	return 0;
}
