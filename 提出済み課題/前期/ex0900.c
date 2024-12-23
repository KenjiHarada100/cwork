/*
24EO0118 原田健司
*/

#include <stdio.h>

int main(void){
	int i;
	int j;
	int k;
	int length = 7;

	for(i = 0; i < length; i++){
		//jをゼロから始める。j<iが成り立つまで、スペースを出力する
		for(j = 0; j < i; j++){
			putchar(' ');
		}
		//kを0から始める。k<=４-jが成り立つまで、＊を出力する
		for(k = 0; k<length-j; k++){
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
