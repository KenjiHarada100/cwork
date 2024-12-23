/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	//整数型の変数va,vzをまとめて宣言
	int va, vz;

	//キーボードから入力した整数を変数va, vzへ代入
	puts("２つの整数を入力してください。");
	printf("va>"); scanf("%d", &va);
	printf("vz>"); scanf("%d", &vz);

	//va / vz を演算して、その結果を少数で表示
	printf("va / vz = %f\n", (double)va / vz);

	return 0;
}
