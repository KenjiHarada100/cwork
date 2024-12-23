//24EO0118  原田健司

#include <stdio.h>

int i;
int j;
int width = 7;
int height = 7;

int main(void){

for(i = 0; i < height; i++){
	for(j = 0; j < width; j++){
		if(i == j || i+j == 6){
			putchar('*');
		}else{
			putchar(' ');
		}
	}
	putchar('\n');
}

	return 0;
}
