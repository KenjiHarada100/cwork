/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 5 //オブジェクト形式マクロ 配列の要素

int main(void){
	int i;
	int ary[LEN];
//ary[]を走査して各要素に１から順に連番で値を代入する
	for(i = 0; i < LEN; i++){
		ary[i] = i + 1;
	}

	for(i = 0; i < LEN; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
	}

	return 0;
}
