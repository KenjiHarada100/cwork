/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int vx;
	int vy;

	printf("vx>");

	scanf("%d", &vx);

	printf("vy>"); scanf("%d", &vy);
	while (vy == 0)
	{
		printf("vy には１以上の整数値を入力してください。\n");
		printf("vy>"); scanf("%d", &vy);
		if (vy != 0)
		{
			break;
		}
	}

	printf("vx << vy : %d\n", vx << vy);
	printf("vx >> vy : %d\n", vx >> vy);

	return 0;
}
