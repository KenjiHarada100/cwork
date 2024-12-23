#include <stdio.h>

int i;
int j;
int height;
int center;

int main(void){


	while(1){
		printf("高さを入力>"); scanf("%d", &height);

		if(height < 3 || height % 2 == 0){
			puts("高さは3以上の奇数にしてください。");
		}else{
			break;
		}
	}

	center = height / 2; //小数点を切り下げ。例えば7なら3。これは0～6を7を数えるために設定したとき、中央値。

	for(i = 0; i < height; i++){
			if( i < center){
				for(j = 0; j <= center + i; j++){
					if(i+j < center){
						putchar(' ');
					}else{
						putchar('*');
					}
				}
			}else{
				for(j = 0; j < height-i+center; j++){
					/*
					//試行錯誤して今ある変数を組み合わせてこれ↑（j < height-i+center;）でひし形を描けるようになったのですが、
					描く理屈がどうなってるか、しばらく考えていたのですが自分ではよくわかりません。
					*/
					if(i-j > center){
						putchar(' ');
					}else{
						putchar('*');
					}
				}
			}
		printf("\n");
	}
		return 0;
}
