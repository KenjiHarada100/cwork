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

	std01.no = 2;
	std01.name[0] = 'j';
	std01.name[1] = 'i';
	std01.name[2] = 'r';
	std01.name[3] = 'o';
	std01.score = 22.2;


	printf("学籍番号%d\n", std01.no);
	printf("名前%s\n", std01.name);
	printf("点数%.1f\n", std01.score);


	return 0;
}
