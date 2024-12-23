//授業中の追加プログラム
#include <stdio.h>

int main(void)
{
	//変数宣言
	int vx;
	int vy;

	//代入
	vx = 10;
	vy = vx;

	//出力
	printf("vxは%d\n", vx);
	printf("vyは%d\n", vy);

	//新しい変数vzを宣言して5を代入
	int vz;
	vz = 5;
	printf("初期値のvzは%d\n", vz);

	//vzに10を足す。
	vz = vz + 10;
	printf("10を足した後のvzは%d\n", vz);

	//さらに10をvzに足してみる。複合演算を用いる。
	vz += 10;
	printf("さらに複合演算で書いたvz += 10; の計算結果としてのvzは%d\n", vz);

	//vzに-3すると
	vz -= 3;
	printf("ここから複合演算で書いたvz -=3;の計算結果vzは%d\n", vz);

	//vzの値を二倍すると
	vz *= 2;
	printf("ここから複合演算で書いたvz *=2;の計算結果vzは%d\n", vz);

	//vzの値を三分の1倍すると
	vz /= 3;
	printf("ここから複合演算で書いたvz /=3;の計算結果vzは%d\n", vz);

	return 0;
}
