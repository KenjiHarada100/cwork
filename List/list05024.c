/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 6

int main(void){
	int i;
	int cnt = 0; //走査回数
	int temp_val;
	int sort_flg;

	int va[LEN] = {64, 42, 20, 90, 14, 52};

	do{
		sort_flg = 0;
		for(i = 0; i < LEN-1; i++){
			if(va[i] > va[i+1]){ //昇順にソートする
				temp_val = va[i];
				va[i] = va[i+1];
				va[i+1] = temp_val;
				sort_flg = 1;
			}
		}
		//ループ回数のインクリメントを表示する
		cnt++;
		printf("%d回目：", cnt);

		for(i = 0; i < LEN; i++){
			printf("[%d] : %d  ", i, va[i]);
		}

			putchar('\n');
	}while(sort_flg);

	return 0;
}
