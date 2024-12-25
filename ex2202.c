/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 101 // 100 文字+ナル文字分の文字数
int str_search(char *str, char s);

int main(void)
 {
	// 文字配列の宣言
	char str[SIZE] = {'\0'}; // ナル文字で初期化

	// 変数の宣言
	int num;
	// int i;
	char s;

	// 文字列の入力
	printf("文字列を入力>"); scanf("%s", str);
	fflush(stdin);
	printf("str : %s\n", str);

	printf("検索する文字列を入力＞"); scanf("%c", &s);
	fflush(stdin);
	printf("str : %c", s);

	num = 0;
	num = str_search(str, s);
	printf("文字列 %s 中に%c は%d文字含まれています。", str, s, num);

	return 0;
}

int str_search(char *str, char s)
{
	// 入力した文字列の長さを求める
	// int len = 0;
	// while (str[len] != '\0') { // 走査する要素がナル文字になるまでループ
	// 		len++;
	// }

	int i;
	int num = 0;
	for(i = 0; str[i] != '\0'; i++ ) { // 配列の走査
		if (str[i] == s){
			num++;
		}
	 }

	 return num;
}
