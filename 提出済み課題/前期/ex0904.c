/*
24EO0118 原田健司
*/

#include <stdio.h>

int i;
int length;

int main(void){

	while(1){
		puts("表示する図形の個数を入力してください。\n");
		printf("個数>"); scanf("%d", &length);
		if (length >= 1){
			break;
		}
		puts("１以上の数を入力してください");
	}

	for(i = 0; i < length; i++){
			if(i % 3 == 0){
			 printf("〇 ");
			}else if(i % 3 == 1){
			 printf("△ ");
			}else{
			 printf("X ");
			}
	}

	return 0;
}
