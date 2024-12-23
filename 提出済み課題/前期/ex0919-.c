//24EO0118  原田健司

#include <stdio.h>

int i;
int j;
int height;
int center;
int max_width;
int space;

int main(void){

  while(1){
    puts("高さを入力>"); scanf("%d", &height);
    if(height < 3 && height % 2 != 0){
      printf("高さは３以上の奇数にしてください。");
    }else{
      break;
    }
  }
  center = (height / 2);
  max_width = (height - 1) * 2 + 1;

  for(int i=0; i<height; i++){

    if(i < center){
      width = i*2+1;
      space = (width-i);
		for(int j=0; j<space; j++){
        printf(" ");
      }
		}
		for(int j=0; j<; j++){
    	printf("*");
		}

    printf("\n");
  }
}
