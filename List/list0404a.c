/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int r;

	do{
			printf("半径のｒ[m]を入力＞");
			scanf("%d", &r);
			if(r <= 0){
			puts("1以上を入力しましょう");
			}
		}while(r <= 0);

	printf("円の面積は%.1f㎡です。\n", r * r * 3.14);

	return 0;
}
