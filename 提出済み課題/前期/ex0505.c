/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){

//変数item_id を宣言
int item_id;

//「メニュー> 0:ジュース 1:お茶 2:コーヒー 3:紅茶」と表示
printf("メニュー> 0:ジュース 1:お茶 2:コーヒー 3:紅茶\n");

//「購入する飲み物の番号を入力>」と表示
printf("購入する飲み物の番号を入力>");

//変数item_id に整数値を入力
scanf("%d", &item_id);

switch(item_id){
	case 0:
	//ジュースは120 円です。と表示
		printf("ジュースは120 円です\n");
		break;
	case 1:
	//お茶は130 円です。と表示
		printf("お茶は130 円です。\n");
		break;
	case 2:
	//コーヒーは140 円です。と表示
		printf("コーヒーは140 円です。\n");
		break;
	//紅茶は160 円です。と表示
	case 3:
		printf("紅茶は160 円です。\n");
		break;
	default:
	//何も購入しませんでした。と表示
		printf("何も購入しませんでした。\n");
		}

return 0;


}
