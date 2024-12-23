/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 6

int main(void){
	int i;
	int key;
	int index;
	int flag = 0;

	int va[LEN] = {32, 56, 90, 42, 21, 87};

	printf("検索する値を入力>");
	scanf("%d", &key);

	for(i = 0; i < LEN; i++){
		if(va[i] == key){
			index = i;
			flag = 1;
			break;
		}
	}

	if (flag == 1){
		printf("%dは、va[%d]に存在します。\n", key, index);
	}else{
		printf("%dは配列には存在しませんでした。\n", key);
	}

	return 0;
}
