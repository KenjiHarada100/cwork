/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

	//整数型の変数pw_num1を宣言し、4321で初期化
	int pw_num1 = 4321;

	//整数型の変数pw_num2を宣言し、8875で初期化
	int pw_num2 = 8875;

	//変数input_numを宣言
	int input_num;

	//変数input_numに整数を入力（暗証番号の入力）
	printf("暗証番号を入力＞");
	scanf("%d", &input_num);


	if(input_num > 10000 || input_num < 999){ //４桁の整数の入力をチェック１０００以上の場合
		printf("４桁の整数を入力してください。\n");
	//}else if(input_num ){
	//	printf("４桁の整数を入力してください。\n");
	}else{ //４桁の整数を入力した場合
		printf("入力チェックOK\n");
				if ( input_num == pw_num1 || input_num == pw_num2){ //pw_numとinput_num1またはinput_num2が同じ番号なら
				//ログインできました。と表示
				printf("ログインできました。\n");
		}else{ //pw_num1またはw_num2とinput_numが違う番号なら
				//暗証番号が違います。と表示
				printf("暗証番号が違います。\n");
		}
	}

//以下、while文で最初に書きました。
/*	while(input_num >= 10000 || input_num < 999){
		printf("４桁の整数を入力してください。\n");
		printf("暗証番号を入力＞");
		scanf("%d", &input_num);
	}

	printf("入力チェックOK\n");

	if ( input_num == pw_num1 || input_num == pw_num2){ //pw_numとinput_num1またはinput_num2が同じ番号なら
			//ログインできました。と表示
			printf("ログインできました。\n");
	}else{ //pw_num1またはw_num2とinput_numが違う番号なら
			//暗証番号が違います。と表示
			printf("暗証番号が違います。\n");
	}*/

	return 0;
}
