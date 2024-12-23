//24EO0118  原田健司

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int fortune;
    srand(time(0));

    fortune = rand() % 10;

    switch(fortune){
        case 0:
            printf("大吉です。\n");
        break;
        case 1:
        case 6:
            printf("中吉です。\n");
        break;
        case 2:
            printf("小吉です。\n");
        break;
        case 3:
        case 7:
        case 8:
            printf("吉です。\n");
        break;
        case 4:
        case 9:
            printf("凶です。\n");
        break;
        case 5:
            printf("大凶です。\n");
        break;
    }

    printf("%d", fortune);

    return 0;
}
