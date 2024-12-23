#include <stdio.h>

/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int vx, vy;

	printf("vx="); scanf("%d", &vx);
	printf("vy="); scanf("%d", &vy);

	if (vx ^ vy){
		puts("入力した値は異なる値です。");
	}else{
		puts("入力した値は同じ値です。");
	}

	return 0;
}
