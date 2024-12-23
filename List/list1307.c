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

	struct student *ps = &std01;
	printf("%d: %s (%.1f)\n", ps->no, ps->name, ps->score);

	return 0;
}
