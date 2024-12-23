//24EO0118  原田健司

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	//生成した乱数を格納するint型の変数を宣言。
	int msg_no;

	//乱数の初期化（乱数の値を設定）
	srand(time(0));

	//0-4の乱数を1-5に変換してmsg_noに代入。
	msg_no = rand() % 5 + 1;

	//得られた1-5の乱数をもとにメッセージを表示する
	switch (msg_no){
		case 1:
			printf("おはよう！\n(msg_no : %d)", msg_no);
			break;
		case 2:
			printf("こんにちは。\n(msg_no : %d)", msg_no);
			break;
		case 3:
			printf("こんばんは。\n(msg_no : %d)", msg_no);
			break;
		case 4:
			printf("おやすみなさい。\n(msg_no : %d)", msg_no);
			break;
		case 5:
			printf("さようなら。\n(msg_no : %d)", msg_no);
			break;
	}

	return 0;
}
