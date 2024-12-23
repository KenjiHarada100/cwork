/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	short int vc[4] = {10, 20, 30, 40};
	short int *pt = vc;

	printf("VC全体のアドレス:0x%p サイズ：%d byte\n", vc, sizeof(vc));

	printf("VC[0]のアドレス:0x%p サイズ：%d byte\n", &vc[0], sizeof(vc[0]));
	printf("VC[1]のアドレス:0x%p サイズ：%d byte\n", &vc[1], sizeof(vc[1]));
	printf("VC[2]のアドレス:0x%p サイズ：%d byte\n", &vc[2], sizeof(vc[2]));
	printf("VC[3]のアドレス:0x%p サイズ：%d byte\n", &vc[3], sizeof(vc[3]));

	putchar('\n');

	printf("vc[0]：%d (0x%p, %d byte)\n", *(pt + 0), pt + 0, sizeof(*(pt + 0)));
	printf("vc[1]：%d (0x%p, %d byte)\n", *(pt + 1), pt + 1, sizeof(*(pt + 1)));
	printf("vc[2]：%d (0x%p, %d byte)\n", *(pt + 2), pt + 2, sizeof(*(pt + 2)));
	printf("vc[3]：%d (0x%p, %d byte)\n", *(pt + 3), pt + 3, sizeof(*(pt + 3)));

	return 0;
}
