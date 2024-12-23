/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

//入力するための整数値を設定
int input_num;

//整数値の変数を３つ設定して、値を代入して初期化する。
int pw_num1 = 123;
int pw_num2 = 456;
int pw_num3 = 789;

printf("パスワードを整数３桁で入力してください＞"); scanf("%d", &input_num);

while( input_num >=1000 || input_num <99){
	printf("整数３桁のパスワードではありません。\n");
	printf("パスワードを整数３桁で入力してください＞"); scanf("%d", &input_num);
}

if (input_num == 123) {
	printf("暗証番号１と一致しました。\n");
}else if (input_num == 456){
	printf("暗証番号２と一致しました。\n");
}else if (input_num == 789){
	printf("暗証番号３と一致しました。\n");
}else{
	printf("どれとも一致しませんでした。\n");
}

	return 0;
}
