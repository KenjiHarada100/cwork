/*
24EO0118 原田健司
*/

#include <stdio.h>
#define SIZE 100

int main(void){
	char str[SIZE];

	int i, j;
	unsigned int num = 0;
	unsigned int len = 0;

	printf("整数を入力>");  scanf("%s", str);

	while (str[len] != '\0'){
		len++;
	}

	for (i = 0; i < len; i++)
	{
		int digit = 1;

		for (j = 0; j < len -i -1; j++) //ループの回数を文字の番号から１引いている。桁の重み付けをしている。
		{
			digit *= 10;
		}

		num += (str[i] - '0') * digit;
	}

	printf("str : %s\n", str);
	printf("num : %d\n", num);

	return 0;
}
