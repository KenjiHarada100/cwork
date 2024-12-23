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
    width = i * 2 + 1;
    space = (max_width - width) / 2;
    for(int j=0; j<space; j++){
      printf(" ");
    }
    for(int j=0; j<width; j++){
      printf("*");
    }
    printf("\n");
  }
}
