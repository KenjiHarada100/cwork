/*
24EO0118 原田健司
*/

#include <stdio.h>

#define ROW 3 // 列　3人
#define COL 5 //５教科
#define NOSUB 5 //Number of Subject
int score[ROW][COL];

int main(void){
	int i; //行のループカウント
	int j; //列のループカウント
	int sum; //各学生の合計値を格納するため
	double ave; //科目ごとの平均点
	int temp; //平均点を求めるために科目ごとの合計値を求める

//文字列の二次元配列を宣言して初期化（科目名の管理）
/*文字列を要素として記述する場合は、必ずchar型の要素を含む二次元配列になる。後期の文字列の章で詳しく解説する予定*/
	char kamoku[NOSUB][5] = {"国語", "数学", "理科", "社会", "英語"}; //2byte*2+"/0"

//二次元配列の宣言と初期化
	for(j = 0; j < ROW; j++){ //何人目か？をjでカウント 行
				printf("＜%d人目の点数＞\n", j+1);
				for(i = 0; i < COL; i++){
						do{ //何科目目か？をiでカウント　列
							printf("%s>", kamoku[i]); scanf("%d", &score[i][j]);
							if(score[i][j] > 100 || score[i][j] < 0){
								printf("点数は0～100点で入力してください。\n");
								// i--;
							}
						}while(score[i][j] > 100 || score[i][j] < 0);
				}
	}

puts(" ");
//二次元配列scoreの走査を行う。
	for (i = 0; i < COL; i++){
		printf("%s", kamoku[i]);

		for(j = 0; j < ROW; j++){
			//走査中の要素の値を整数四桁で出力する
			printf("%4d", score[i][j]);
		}

		for(j = 0; j < ROW; j++){
		//次の周回に入ったときにリセットするために、
		//ここにtemp = 0;と書く。
		temp = 0;
		temp += score[i][j];
		ave = (double)temp / ROW;
		}

		printf("(%4.1f)", ave);

		putchar('\n');
	}

	puts("----------------");
	printf("合計");
	//学生ごとに科目ごとの得点の合計を演算して出す。
	for(j = 0; j < ROW; j++){
		//足し合わせたら、次の周回に入ったときに一度合計値をリセットするために、ここにsum = 0;と書く。
		sum = 0;

		for(i = 0; i < COL; i++){
			sum += score[i][j];
		}
		printf("%4d", sum);
	}
	putchar('\n');

	return 0;
}
