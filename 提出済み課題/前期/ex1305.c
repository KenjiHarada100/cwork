/*
24EO0118 原田健司
*/

#include <stdio.h>

void print_pow(int x, int y);

int main(void){

	int vx, vy;

	puts("2 つの整数を入力してください");
	printf("vx>"); scanf("%d", &vx);
	printf("vy>"); scanf("%d", &vy);

	print_pow(vx, vy);

	return 0;
}

void print_pow(int x, int y)
{
	int i;
	int ans;
	double ans_double;
	int temp_x, tmp_y;

	i = 0;
	ans = 1;
	ans_double = 1;
	temp_x = x;
	tmp_y = y;

	if(y == 0){
		printf("%dの%d乗は%dです。\n", x, y, ans);
	} else if (y >= 1){
		for(i = 1; i <= y; i++)
		{
			ans *= x;
		}
		printf("%dの%d乗は%dです。\n", temp_x, tmp_y, ans);
	} else {
		y = -y;
		for(i = 1; i <= y; i++)
		{
			ans_double = ans_double / x;
		}
		printf("%dの%d乗は%.2fです。\n", temp_x, tmp_y, ans_double);
	}
}
