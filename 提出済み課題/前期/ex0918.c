//24EO0118  原田健司

#include <stdio.h>

int i;
int j;
int height = 5;
int space;
int width;
int max_width;

int main(void){

  max_width = (height - 1) * 2 + 1;

  for(int i=0; i<height; i++){
    width = i;
    space = (width);
		for(int j=0; j<space; j++){
      printf(" ");
		}
		for(int j=0; j<max_width-(i*2); j++){
    	printf("*");
		}

    printf("\n");
  }
}
