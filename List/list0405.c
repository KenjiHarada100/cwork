/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int cnt = 0;
	int input_val;

	printf("整数を入力＞"); scanf("%d", &input_val);

	while (input_val != 0){

		printf("（１）値は%d != 0　", input_val);
		cnt++;

		input_val /= 10;
		printf("(2)１０で割った値は%d, (3)%d桁\n",input_val, cnt);
	}

	printf("入力した整数値は %d 桁です。", cnt);

	return 0;
}
