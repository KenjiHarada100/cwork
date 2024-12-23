
                  
/*
24EO0118 原田健司
*/

/*アドレス定義*/
#define PCR6 *(volatile unsigned char *)0xFFE9
#define PDR6 *(volatile unsigned char *)0xFFD9

/*プロトタイプ宣言*/
void main(void);
void init(void);
void wait(long);

/*メイン関数*/
void main(void){

 int i; //for文で使う変数を宣言　これはwait関数で用いているiとは別物。
  
  init(); //int()でイニシャライズする

  while(1) {
	for(i = 0; i< 10; i++){
    PDR6 = 0x55;
    wait(6666666);
    PDR6 = 0x29;
    wait(6666666);
	PDR6 = 0xBB;
    wait(6666666);
 	}
/*	for(i = 0; i< 10; i++){
    PDR6 = 0xF0;
    wait(2000000);
    PDR6 = 0x0F;
    wait(2000000);
	}*/
  }
}

/*イニシャル関数*/
void init(void){
  PCR6 = 0xFF; // P6をアウトプットに
  PDR6 = 0x00; // P6を消灯
}

/*wait関数*/
void wait(long i){
  for(i;i>0;i--) {
    ; // NOP(No OPeration 何もしないの意)
  }
}

