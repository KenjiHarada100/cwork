/*
24EO0118 原田健司
再提出です。よろしくお願いいたします。
*/

#include <stdio.h>
#define LEN 10

int main(void)
{
    int i;
    int ary[LEN];

    for(i = 0; i < LEN; i++){
        ary[i] = i * 10;
    }

    for(i=0; i<LEN; i++){
		printf("ary[%d] : %d\n", i, ary[i]);
    }

    return 0;
}
