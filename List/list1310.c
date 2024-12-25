/*
24EO0118 原田健司
*/

#include <stdio.h>

struct student{
	int no;
	char name[20];
	double score;
};

void print_student(struct student *pt);
struct student input_student(struct student *pt);

int main(void){
	struct student std01;

	std01 = input_student(&std01);
	print_student(&std01);

	return 0;
}

void print_student(struct student *pt)
{
	printf("%d: %s (%.1f)\n", pt->no, pt->name, pt->score);
}

void input_student(struct student *pt)
{
	printf("番号＞"); scanf("%d", &pt->no);
	printf("名前＞"); scanf("%s", pt->name);
	printf("点数＞"); scanf("%lf", &pt->score);
}
