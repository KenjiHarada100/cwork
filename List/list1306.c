/*
24EO0118 原田健司
*/

#include <stdio.h>
#define LEN 4

struct student{
	int no;
	char name[20];
	double score;
};

int main(void){
	int i, flag;
	struct student temp;

	struct student stds[LEN] = {
		{1, "taro", 72.5},
		{2, "jiro", 22.2},
		{3, "saburo", 61.6},
		{1, "hanako", 92.1}
	};

	do {
		flag = 0;
	for (i = 0; i < LEN; i++){
		if (stds[i].score > stds[i+1].score)
		{
			temp = stds[i];
			stds[i] = stds[i + 1];
			stds[i + 1] = temp;
			flag = 1;
		}
	}
	}while(flag);

	for (i = 0; i < LEN; i++){
		printf("%d: %s (%.1f)\n", stds[i].no, stds[i].name, stds[i].score);
	}
	// struct student std01 = {1, "taro", 72.5};
	// struct student std02 = {2, "jiro", 22.2};
	// struct student std03 = {3, "saburo", 61.6};
	// struct student std04 = {1, "hanoko", 92.1};

	// printf("番号＞"); scanf("%d", &std01.no);
	// printf("名前＞"); scanf("%s", std01.name);
	// printf("点数＞"); scanf("%lf", &std01.score);

	// std01.no = 2;
	// std01.name[0] = 'j';
	// std01.name[1] = 'i';
	// std01.name[2] = 'r';
	// std01.name[3] = 'o';
	// std01.score = 22.2;

	// printf("%d: %s (%.1f)\n", std01.no, std01.name, std01.score);
	// printf("%d: %s (%.1f)\n", std02.no, std02.name, std02.score);
	// printf("%d: %s (%.1f)\n", std03.no, std03.name, std03.score);
	// printf("%d: %s (%.1f)\n", std04.no, std04.name, std04.score);

	// printf("学籍番号%d\n", std01.no);
	// printf("名前%s\n", std01.name);
	// printf("点数%.1f\n", std01.score);


	return 0;
}
