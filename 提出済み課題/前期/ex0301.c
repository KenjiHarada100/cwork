/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void)
{
	//浮動小数点型の変数dx,dyをまとめて宣言
	double dx, dy;

	//変数dx, dyへキーボードから小数値を入力
	puts("２つの少数を入力してください。");
	printf("dx>"); scanf("%lf", &dx);
	printf("dy>"); scanf("%lf", &dy);

	//dx * dyを演算して、その結果を表示
	printf("dx * dy = %f\n", dx + dy);

	return 0;

}
