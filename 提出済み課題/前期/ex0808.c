//24EO0118  原田健司

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	//自分の手と対戦相手の手を整数の変数として宣言
	int player;
	int com;
	int i = 0; //私の勝ち数
	int j = 0; //私の負け数

	while( i <= 3 || j <= 3 ){
		do{
			printf("じゃんけん…（0:グー　1:チョキ　2:パー）＞"); scanf("%d", &player);
			printf("あなたの手＞%d\n", player);
			//0,1,2でなければ、0，1，2の入力を再び促す。
			if (player > 2 || player < 0){
				printf("0～2の数値を入力してください。\n");
			}
		}while(player > 2 || player < 0);

		srand(time(0));

		com = rand() % 3;
		if(com == 0){
			printf("あいての手：グー\n");
		}else if(com == 1){
			printf("あいての手：チョキ\n");
		}else if(com == 2){
			printf("相手の手：パー\n");
		}

		if ((player == 0 && com == 1) || (player == 1 && com == 2) || (player == 2 && com == 0)){
			printf("あなたの勝ちです\n");
			i += 1;
			//printf("%d勝%d敗であなたの勝ちです\n", i, j);
			if(i==3){
			break;
			}
		}else if(player == com){
			printf("あいこです\n");
		}else if((player == 0 && com == 2) || (player == 1 && com == 0) || (player == 2 && com == 1)){
			printf("あなたの負けです\n");
			j += 1;
			//printf("%d 勝 %d 敗であなたの負けです\n", i, j);
			if(j==3){
			break;
			}
		}
	}

	printf("---------\n");
	if(i==3){
		printf("%d 勝 %d 敗であなたの勝ちです", i, j);
	}else{
		printf("%d 勝 %d 敗であなたの負けです", i, j);
	}

	return 0;
}
