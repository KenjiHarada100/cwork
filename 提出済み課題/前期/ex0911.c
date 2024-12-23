/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	//行ループカウント
	int i;
	//列ループカウントの半角スペース入力ループカウント
	int j;
	//列ループカウントの*入力ループカウント
	int k;
	//縦幅
	int height;
	//横幅
	int width;


	while(1){
		printf("縦幅を入力>"); scanf("%d", &height);
		printf("横幅を入力>"); scanf("%d", &width);

		if(height >= 2 && width >= 2){
			break;
		}
		puts("縦幅と横幅は２以上にしてください。");
	}

	for(i = 0; i < height; i++){
		for(j = 0; j < i; j++){
			putchar(' ');
		}
		for(k = 0; k < width; k++){
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
