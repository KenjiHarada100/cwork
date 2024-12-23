/*
24EO0118 原田健司
*/

#include <stdio.h>

enum fruit {
	Apple,
	Orange,
	Banana,
	Lemon,
	Grape,
	End
};

int main(void){
	int item, price;

	puts("０：りんご　１：みかん　２：バナナ ３：レモン　４：グレープ");
	printf("番号を入力＞"); scanf("%d", &item);

	switch (item)
	{
		case Apple:
			price = 300;
			break;
		case Orange:
			price = 280;
			break;
		case Banana:
			price = 900;
			break;
		case Lemon:
			price = 200;
			break;
		case Grape:
			price = 500;
			break;
		default:
			price = 0;
			break;
	}

	if (item < End){
		printf("購入金額は%d円です。\n", price);
	}else{
		printf("0～%dの数値を入力してください。\n", End -1);
	}

	return 0;
}
