/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 4

void input_array(int [], int);
int array_min(int [], int);

int main(void){
	int min;
	int array[LEN];

	input_array(array, LEN);
	min = array_min(array, LEN);

	printf("min : %d", min);

	return 0;
}

void input_array(int ary[], int len)
{
	printf("整数を%dつ入力してください。\n", len);
	int i;
	for (i = 0; i < len; i++){
		printf("[%d]>", i); scanf("%d", &ary[i]);
	}
}

int array_min(int ary[], int len)
{
	int i;
	int min;
	min = ary[0]; //minを初期化
	for (i = 1; i < len; i++){
		if(ary[i] < min)
		{
			min = ary[i];
		} else {
		}
	}

	return min;
}
