#include <stdio.h>

int main(void){

	int a;
	printf("整数を入力＞"); scanf("%d", &a);

	//条件分岐処理
	if(a % 5 == 0){
		printf("%dは５の倍数です。\n", a);
	}else{　//a % 5 がゼロならば
		printf("%dは５の倍数ではありません。\n", a);
	}

	return 0;
}
