/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 101 // 100 文字+ナル文字分の文字数

int main(void)
 {
	// 文字配列の宣言
	char str[SIZE] = {'\0'}; // ナル文字で初期化
	char rev[SIZE] = {'\0'}; // ナル文字で初期化

	// 変数の宣言
	int len = 0;
	int i;

	// 文字列の入力
	printf("文字列を入力>"); scanf("%s", str);

	// 入力した文字列の長さを求める
	while (str[len] != '\0') { // 走査する要素がナル文字になるまでループ
		len++;
	}

	// 求めた長さを使って配列str の文字列を逆順にしてrev へコピー
	for(i = 0; i < len ; i++ ) { // 配列の走査
		rev[i] = str[len - i - 1]; // 配列rev
	}

	i = 0;
	for(i = 0; i < len; i++){
		str[i] = rev[i];
	}

	// 配列str を表示
	printf("str : %s\n", str);

	return 0;
}
