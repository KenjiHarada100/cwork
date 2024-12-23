/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 9

int main(void){
	int i;
	int key;
	int low_index;
	int high_index;
	int middle_index;
	int cnt;

	int va[LEN];

	for(i = 0; i < LEN; i++){
		va[i] = i;
	}

	printf("検索する値を入力>"); scanf("%d", &key);

	low_index = 0;
	high_index = LEN-1;

	while(1){
		cnt++;

		middle_index = (low_index + high_index) / 2;

		if(va[middle_index] == key){
			printf("%dはva[%d]に存在します。\n", key, middle_index);
			break;
		}else{
			if(va[middle_index] < key){
				low_index = middle_index + 1;
			}else{
				high_index = middle_index -1;
			}

			if(low_index < high_index){
				printf("%dは配列vaには存在しませんでした。\n", key);
			}
		}
	}
	printf("探索回数：%d 回\n", cnt);

	return 0;
}
