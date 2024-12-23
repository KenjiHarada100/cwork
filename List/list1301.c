/*
24EO0118 原田健司
*/

#include <stdio.h>

struct student{
	int no;
	char name[20];
	double score;
};

int main(void){
	struct student std01 = {1, "taro", 72.5};

	printf("学籍番号%d\n", std01.no);
	printf("名前%s\n", std01.name);
	printf("点数%.1f\n", std01.score);


	return 0;
}
