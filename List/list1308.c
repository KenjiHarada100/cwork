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

int main(void){
	struct student std01 = {1, "taro", 72.5};
	print_student(std01);

	return 0;
}

void print_student(struct student st)
{
	printf("%d: %s (%.1f)\n", st.no, st.name, st.score);
}
