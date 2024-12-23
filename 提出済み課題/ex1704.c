/*
24EO0118 原田健司
*/

#include <stdio.h>

enum drink {
	Coffee,
	Tea,
	Coke,
	Water,
	End
};

int main(void){

	int num;
	printf("整数を入力＞"); scanf("%d", &num);

	while ((num > Water) || (num < Coffee))
	{
		puts("0 から 3 までの値を入力してください。");
		printf("整数を入力＞"); scanf("%d", &num);
	}

switch (num) {
	case Coffee :
		puts("コーヒーを買いました。\n");
		break;
	case Tea :
		puts("お茶を買いました。\n");
		break;
	case Coke :
		puts("コーラを買いました。\n");
		break;
	case Water :
		puts("お水を買いました。\n");
		break;
}

	return 0;
}
