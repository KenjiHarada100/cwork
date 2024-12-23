//24EO0118  原田健司

#include <stdio.h>

int main(void){
	//整数型の変数iを定義
	int i;

	for( i=0; i < 12; i++ ){//iが１２より小さい間はループする
	//変数iの値を表示する
		printf("%d ", i);
	}

	//文末で改行を行う
	putchar('\n');

	return 0;
}
