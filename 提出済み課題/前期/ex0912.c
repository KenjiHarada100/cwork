/*
24EO0118 原田健司
再提出です。よろしくお願いいたします。
*/

#include <stdio.h>

int i;
int j;
int width;
int height;

int main(void){

	printf("縦幅を入力>"); scanf("%d", &height);
	printf("横幅を入力>"); scanf("%d", &width);

	for(i = 0; i < height; i++){
		for(j = 0; j < width; j++){
		//奇数行目
		if(i % 2 != 0){

				if (j % 2 != 0){
					printf("ー");
				}else{
					printf("|");
				}
			}else{ //偶数行目
				if (j % 2 != 0){
						printf("|");
				}else{
						printf("ー");
				}
			}
		}
		putchar('\n');
	}

	return 0;
}
