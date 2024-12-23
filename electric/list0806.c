#include <stdio.h>

int main(void)
{
	int vx;
	int vx2;

	printf("vx>"); scanf("%d", &vx);

	vx2 = ~vx + 1U;

	printf("2の補数表現で変換：%d\n", vx2);

	printf("vx + vx2 = %d\n", vx + vx2);

	return 0;
}
