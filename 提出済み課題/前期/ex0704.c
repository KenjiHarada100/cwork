//24EO0118  原田健司

#include <stdio.h>

int main(void){

     int year;
     int eto;

     printf("西暦を入力＞"); scanf("%d", &year);

     eto = year % 12;

     switch(eto){
        case 0:
            printf("%d年の十二支は申です。", year);
            break;
        case 1:
            printf("%d年の十二支は酉です。", year);
            break;
        case 2:
            printf("%d年の十二支は戌です。", year);
            break;
        case 3:
            printf("%d年の十二支は亥です。", year);
            break;
        case 4:
            printf("%d年の十二支は子です。", year);
            break;
        case 5:
            printf("%d年の十二支は丑です。", year);
            break;
        case 6:
            printf("%d年の十二支は寅です。", year);
            break;
        case 7:
            printf("%d年の十二支は卯です。", year);
            break;
        case 8:
            printf("%d年の十二支は辰です。", year);
            break;
        case 9:
            printf("%d年の十二支は巳です。", year);
            break;
        case 10:
            printf("%d年の十二支は午です。", year);
            break;
        case 11:
            printf("%d年の十二支は未です。", year);
            break;
     }

    return 0;
}
