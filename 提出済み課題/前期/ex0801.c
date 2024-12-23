//24EO0118  原田健司

#include <stdio.h>

int main(void){
	//ループカウントを０で初期化する
	int i = 0;

	while( i < 12){//iが１２より小さい間はループする
	//変数iの値を表示する
		printf("%d ", i);

		//インクリメント演算子でiの値を＋１する
		++i;
	}

	//文末で改行を行う
	putchar('\n');

	return 0;
}
