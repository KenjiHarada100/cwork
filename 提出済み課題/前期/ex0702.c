/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

int fortune;
srand(time(0));
fortune = rand() % 6;

if(fortune == 0){
	printf("大吉です。");
}else if(fortune == 1){
	printf("中吉です。");
}else if(fortune == 2){
	printf("小吉です。");
}else if(fortune == 3){
	printf("吉です。");
}else if(fortune == 4){
	printf("凶です。");
}else{
	printf("大凶です。");
}

	return 0;
}
