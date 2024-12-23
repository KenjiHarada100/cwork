 /*
 24EO0118 原田健司
 */

 #include <stdio.h>

void adjust_value(int *px);

 int main(void){
	int vx;

	printf("整数 vx>"); scanf("%d", &vx);
	adjust_value(&vx);

	printf("vx : %d\n", vx);

	return 0;
 }

 void adjust_value(int *px)
 {
	if (*px > 100){
		*px = 100;
	}else if(*px < 0){
		*px = 0;
	}
 }
