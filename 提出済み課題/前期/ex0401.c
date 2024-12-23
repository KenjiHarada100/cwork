/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	//整数型の変数pw_numを宣言し、1234で初期化
	int pw_num = 1234;

	//変数input_numを宣言
	int input_num;

	//変数input_numに整数を入力（暗証番号の入力）
	printf("暗証番号を入力＞");
	scanf("%d", &input_num);

	if ( pw_num == input_num){ //pw_numとinput_numが同じ番号なら
			//ログインできました。と表示
			printf("ログインできました。\n");
	}else{ //pw_numとinput_numが違う番号なら
			//暗証番号が違います。と表示
			printf("暗証番号が違います。\n");
	}

	return 0;
}
