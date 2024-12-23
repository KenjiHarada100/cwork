/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int r;
	int flag = 0;
//再実行処理のループ（flagで制御)
	do{
		//再入力処理のループ(rで制御)
		do{
			printf("半径r（ｍ）を入力＞"); scanf("%d", &r);

			if(r <= 0){
				puts("1以上の値を入力しましょう");
			}
		}while(r <= 0);

		printf("円の面積は%.1f [㎡]です。\n", r * r * 3.14);

		printf("処理を続けますか？（YES:1, NO:0)>");
		scanf("%d", &flag);
	}while(flag);

	puts("処理を終了しました。\n");

	return 0;
}
