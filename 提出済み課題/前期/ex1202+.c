/*
24EO0118 原田健司
*/

#include <stdio.h>

#define ROW 4 //
#define COL 5
#define NOSUB 5 //Number of Subject
int score[ROW][COL];

int main(void){
	int i; //行のループカウント(何人目？か）
	int j; //列のループカウント（何科目目？か）
	int sum; //各学生の合計値を格納するため

//文字列の二次元配列を宣言して初期化（科目名の管理）
/*文字列を要素として記述する場合は、必ずchar型の要素を含む二次元配列になる。後期の文字列の章で詳しく解説する予定*/
	char kamoku[NOSUB][5] = {"国語", "数学", "理科", "社会", "英語"}; //2byte*2+"/0"

//二次元配列の宣言と初期化

	for(i = 0; i < ROW; i++){ //何人目か？をiでカウント
			printf("＜%d人目の点数＞", i+1);
		// do{
		// 	for(j = 0; j < COL; j++){ //何科目目か？をjでカウント
		// 			printf("%s>", kamoku[j]); scanf("%d", &score[i][j]);
		// 	}
		// 	if(score[i][j] > 100 || score[i][j] < 0){
		// 			printf("点数は0～100点で入力してください。\n");
		// 			j--;
		// 	}
		// }while(score[i][j] > 100 || score[i][j] < 0);
	}

//二次元配列scoreの走査を行う。
	for (i = 0; i < ROW; i++){
		printf("%s", kamoku[i]);

		for(j = 0; j < COL; j++){
			//走査中の要素の値を整数四桁で出力する
			printf("%4d", score[i][j]);
		}
		putchar('\n');
	}

	puts("----------------");
	printf("合計");
	//学生ごとに科目ごとの得点の合計を演算して出す。
	for(j = 0; j < COL; j++){
		//足し合わせたら、次の周回に入ったときに一度合計値をリセットするために、ここにsum = 0;と書く。
		sum = 0;

		for(i = 0; i < ROW; i++){
			sum += score[i][j];
		}
		printf("%4d", sum);
	}
	putchar('\n');
	return 0;
}
