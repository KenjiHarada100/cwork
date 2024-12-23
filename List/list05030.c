/*
24EO0118 原田健司
*/

#include <stdio.h>
#define ROW 5
#define COL 3

int main(void){
	int i; //行のループカウント
	int j; //列のループカウント
	int sum; //各学生の合計値を格納するため

//二次元配列の宣言と初期化
	int score[ROW][COL]={
		{81, 62, 74}, //kokugo
		{23, 45, 78}, //suugaku
		{54, 86, 56}, //rika
		{94, 78, 56}, //syakai
		{45, 98, 100} //eigo
	};

//文字列の二次元配列を宣言して初期化（科目名の管理）
/*文字列を要素として記述する場合は、必ずchar型の要素を含む二次元配列になる。後期の文字列の章で詳しく解説する予定*/
	char kamoku[ROW][5] = {"国語", "数学", "理科", "社会", "英語"}; //2byte*2+"/0"
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
