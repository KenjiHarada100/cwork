//24EO0118  原田健司

#include <stdio.h>

int main(void){

	//for文のための変数i
	int i;

	//ループの上限の整数値を宣言 初期値として０を代入
	int cnt = 0;

	do{
		printf("ループの上限を入力＞"); scanf("%d", &cnt);
		if(cnt == 0){
			printf("入力する数は１以上にしましょう。\n");
		}
	}while(cnt == 0);

	//入力した値cntにたどり着くまで　間を２たつ飛ばした値を出力する。
	for( i = 0; i <= cnt; i+=3){
		printf("%02d ", i);
	}

	return 0;
}
