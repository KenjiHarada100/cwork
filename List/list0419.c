/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int r;

		while(1){
			printf("半径r[ｍ]を入力＞"); scanf("%d", &r);

			if(r > 0){

				break;

			}
			puts("1以上の値を入力しましょう");
		}
		printf("円の面積は%.1f [㎡]です。\n", r * r * 3.14);

	return 0;
}
