//24EO0118  原田健司
//再提出です。よろしくお願いいたします。

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	//自分の手player と 相手の手comを整数の変数として宣言
	int player;
	int com;

	//自分の手を入力を求める
	printf("じゃんけん…（0:グー　 1:チョキ　2:パー）＞"); scanf("%d", &player);
	printf("あなたの手＞%d\n", player);

	if (player > 2 || player < 0){
		//0，1，2以外の数値が入力されたら終了
		printf("0～2の数値を入力してください。\n");
	}else{
		//乱数の初期値を設定
		srand(time(0));
		//乱数を設定（あいての手が決まる）
		com = rand() % 3;
		//相手の手を表示する
		if(com == 0){
			printf("あいての手：グー\n");
		}else if(com == 1){
			printf("あいての手：チョキ\n");
		}else if(com == 2){
			printf("相手の手：パー\n");
		}
		//勝ち負けを判定
		if ((player == 0 && com == 1) || (player == 1 && com == 2) || (player == 2 && com == 0)){
			printf("あなたの勝ちです\n");
		}else if(player == com){
			printf("あいこです\n");
		}else if((player == 0 && com == 2) || (player == 1 && com == 0) || (player == 2 && com == 1)){
			printf("あなたの負けです\n");
		}
	}
		return 0;
}
