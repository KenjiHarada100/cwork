//24EO0118  原田健司

#include <stdio.h>

int main(void){
    //缶コーヒー一本の金額
     int price = 120;
    //缶コーヒーの購入本数
     int qly;
    //合計金額
     int total;

     printf("一本%d円のコーヒーを何本買いますか？＞", price);
     scanf("%d", &qly);


     //値引き前の合計金額を缶コーヒー１本の金額と購入本数から単純に計算
     total = price * qly;
     //printf("正価の合計金額は%d円です。\n", total);

     if (qly >= 150) { //１５０本以上購入したときは、２０%引き
         printf("合計金額は%d円です。\n", total = (int)total*(1-0.2));
      } else if (qly >= 100) { //１００本以上購入したときは１０%引き
         printf("合計金額は%d円です。\n", total = (int)total*(1-0.1));
      } else { //いずれにも当てはまらない（100本未満）ときには、割引なしで。
         printf("合計金額は%d円です。\n", total);
     }

    return 0;
}
