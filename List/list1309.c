/*
24EO0118 原田健司
*/

#include <stdio.h>

struct student{
	int no;
	char name[20];
	double score;
};

void print_student(struct student st);
struct student input_student(void);

int main(void){
	struct student std01;

	std01 = input_student();
	print_student(std01);

	return 0;
}

void print_student(struct student st)
{
	printf("%d: %s (%.1f)\n", st.no, st.name, st.score);
}

struct student input_student(void)
{
	struct student temp = {0};

	printf("番号＞"); scanf("%d", &temp.no);
	printf("名前＞"); scanf("%s", temp.name);
	printf("点数＞"); scanf("%lf", &temp.score);

	return temp;

}
