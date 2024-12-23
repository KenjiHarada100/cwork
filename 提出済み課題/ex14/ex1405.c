/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 8

void input_array(int [], int);
void print_array(int [], int);
void sort_array(int [], int);

int main(void){

	int ary[LEN] = {0};

	input_array(ary, LEN);
	sort_array(ary, LEN);
	putchar('\n');
	printf("[昇順ソート]\n");
	print_array(ary, LEN);

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

void print_array(int ary[], int len)
{
	int i;
	for (i = 0; i < len; i++){
		printf(("[%d] : %d\n"), i, ary[i]);
	}
}

//選択ソートでソートする。
void sort_array(int ary[], int len)
{
	int i;
	int temp_val;
	int max_index;
	int last_index;

	last_index = len -1;

	while(last_index > 0)
	{
		max_index = 0;

		for(i = 1; i <= last_index; i++){
			if(ary[i] > ary[max_index]){
				max_index = i;
			}
		}
		temp_val = ary[last_index];
		ary[last_index] = ary[max_index];
		ary[max_index] = temp_val;

		last_index--;
	}
}
