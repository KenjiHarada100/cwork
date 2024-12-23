/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int vx;

	int vc[3];
	char cc[3];
	double dc[3];
	long int lc[3];

	printf("vc:%p\n", vc);
	printf("vx : %p, %d, byte\n", &vx, sizeof(vx));
	printf("cc : %p, %d, byte\n", &cc, sizeof(cc));
	printf("dc : %p, %d, byte\n", &dc, sizeof(dc));
	printf("lc : %p, %d, byte\n", &lc, sizeof(lc));

	puts("");

	printf("vc[0] : %p, %d, byte\n", &vc[0], sizeof(vc[0]));
	printf("vc[0] : %p, %d, byte\n", &vc[1], sizeof(vc[1]));
	printf("vc[0] : %p, %d, byte\n", &vc[2], sizeof(vc[2]));
	puts("");
	printf("cc[0] : %p, %d, byte\n", &cc[0], sizeof(cc[0]));
	printf("cc[0] : %p, %d, byte\n", &cc[1], sizeof(cc[1]));
	printf("cc[0] : %p, %d, byte\n", &cc[2], sizeof(cc[2]));
	puts("");
	printf("dc[0] : %p, %d, byte\n", &dc[0], sizeof(dc[0]));
	printf("dc[0] : %p, %d, byte\n", &dc[1], sizeof(dc[1]));
	printf("dc[0] : %p, %d, byte\n", &dc[2], sizeof(dc[2]));
	puts("");
	printf("lc[0] : %p, %d, byte\n", &lc[0], sizeof(lc[0]));
	printf("lc[0] : %p, %d, byte\n", &lc[1], sizeof(lc[1]));
	printf("lc[0] : %p, %d, byte\n", &lc[2], sizeof(lc[2]));
	return 0;
}
