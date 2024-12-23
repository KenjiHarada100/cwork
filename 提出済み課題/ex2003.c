/*
24EO0118 原田健司
*/

#include <stdio.h>

int add_gate(int a, int b);
int or_gate(int a, int b);
int not_gate(int a);
int xor_gate(int a, int b);
void harf_adder(int a, int b, int *hs, int *hc);

int main(void){
	int a, b;
	int hs, hc;
	int count = 0;

	puts("A B | S C");
	puts("---------");
	while(count < 4){
		a = count / 2;
		b = count % 2;
		harf_adder(a, b, &hs, &hc);
		printf("%d %d | %d %d\n", a, b, hs, hc);
		count++;
	}

	return 0;
}

int or_gate(int a, int b){
	if (a == 0 && b == 0)
		return 0;
	if (a == 0 && b == 1)
		return 1;
	if (a == 1 && b == 0)
		return 1;
	if (a == 1 && b == 1)
		return 1;
	return 0;
}

int add_gate(int a, int b){
	if (a == 0 && b == 0)
		return 0;
	if (a == 0 && b == 1)
		return 0;
	if (a == 1 && b == 0)
		return 0;
	if (a == 1 && b == 1)
		return 1;
	return 0;
}

int not_gate(int a){
	if (a == 0)
		return 1;
	if (a == 1)
		return 0;
	return 0;
}

int xor_gate(int a, int b){
	return add_gate(or_gate(a, b), (not_gate(add_gate(a, b))));
}

void harf_adder(int a, int b, int *hs, int *hc)
{
	*hs = xor_gate(a, b);
	*hc = add_gate(a, b);
}
