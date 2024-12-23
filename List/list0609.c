/*
24EO0118 原田健司
*/
c
#include <stdio.h>

void func_a();
void func_b();

int main(void){

	func_a();

	return 0;
}

void func_a(void)
{
	puts("func_aを呼び出しました。");

	func_b();
}

void func_b(void)
{
	puts("func_bを呼び出しました。");
}
