/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 3

int main(void){

	int i;
	int sum = 0;

    int input_ary[LEN];
    puts("3つの整数を入力してください。");

    for(i = 0; i < LEN; i++){
        printf("[%d]> ", i); scanf("%d", &input_ary[i]);
        sum += input_ary[i];
    }

    printf("3つの合計は %d です。\n", sum);

    return 0;
}
