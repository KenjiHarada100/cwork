/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int item_id;

	puts("[メニュー＞　0：コーヒー　１：紅茶　２：ジュース]");
	printf("購入する飲み物の番号を入力してください＞"); scanf("%d", &item_id);

	switch(item_id){
		case 0:
			puts("コーヒーは120円です。");
			break;
		case 1:
			puts("紅茶は150円です。");
			break;
		case 2:
			puts("ジュースは150円です。");
			break;
		default:
			puts("何も買いませんでした。");
	}

	return 0;
}
