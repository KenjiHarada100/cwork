/*
24EO0118 原田健司
*/

#include <stdio.h>
#include <conio.h>

#define X_LENGTH   9    // 横の長さ
#define Y_LENGTH   9    // 縦の長さ

#define KEY_SP1   0x00  // 特殊キー判定1
#define KEY_SP2   0xE0  // 特殊キー判定2
#define KEY_UP    0x48  // 上キー
#define KEY_DOWN  0x50  // 下キー
#define KEY_LEFT  0x4b  // 左キー
#define KEY_RIGHT 0x4d  // 右キー

int main(void)
{
  // 整数型の変数を宣言
  int i, j;   // ループカウント
  int x = 0;  // 操作キャラの現在地のX座標
  int y = 0;  // 操作キャラの現在地のY座標
  int key;    // 入力したキー情報

  // 整数型の2次元配列を宣言
  int map[Y_LENGTH][X_LENGTH];  // mapデータ

  /**
   * map配列の各要素の値の意味について
   *
   * 移動可能ならエリア  0
   * 男性村人キャラ      1
   * 女性村人キャラ      2
   * 障害物              3
   */

  // map配列の全ての要素を0にする
  for (i = 0; i < X_LENGTH; i++) {
    for (j = 0; j < Y_LENGTH; j++) {

      map[i][j] = 0;
    }
  }

  // 村人キャラの設定（男性:1, 女性:2）
  map[1][7] = 1;
  map[7][2] = 2;

  // 障害物の設定
  map[2][3] = 3;
  map[2][4] = 3;
  map[3][4] = 3;
  map[3][5] = 3;
  map[3][6] = 3;
  map[5][6] = 3;
  map[5][7] = 3;
  map[6][4] = 3;
  map[7][4] = 3;

  // 表示と入力処理
  while (1) { // 無限ループ開始

    // マップの描画
    for (i = 0; i < Y_LENGTH; i++) { // 縦（行）のループ
      for (j = 0; j < X_LENGTH; j++) { // 横（列）のループ

        if (i == y && j == x) { // 描画する座標が自キャラの現在位置なら

          // 自キャラの描画
          printf("※");

        } else if (map[i][j] == 0) { // 描画するmap配列の要素が0なら

          // 移動可能なエリアの描画
          printf("□");

        } else if (map[i][j] == 1) { // 描画するmap配列の要素が1なら

          // 男性キャラの描画
          printf("♂");

        } else if (map[i][j] == 2) { // 描画するmap配列の要素が2なら

          // 女性キャラの描画
          printf("♀");

        } else { // 描画するmap配列の要素が上記以外なら

          // 障害物の描画
          printf("▲");
        }
      }

      // 行末で改行
      putchar('\n');
    }

    // 自キャラの現在位置を表示
    printf("i(y) : %d, j(x) : %d\n\n", y, x);

    // 入力メッセージ
    printf("矢印キーで移動（その他のキーで終了）\n");

    // 入力処理
    key = getch();

    // 入力判定
    if (key == KEY_SP1 || key == KEY_SP2) { // 特殊キーを押したか判定

      // 押した矢印キーの種類を取得して変数 key に代入
      key = getch();

      // 自キャラの移動
      switch (key) {
        case KEY_UP : // 上キーを押したなら
          y--;
          break;
        case KEY_DOWN : // 下キーを押したなら
          y++;
          break;
        case KEY_LEFT : // 左キーを押したなら
          x--;
          break;
        case KEY_RIGHT : // 右キーを押したなら
          x++;
          break;
      }

      if (x < 0) { // X座標がマイナス値になら

        // X座標を強制的に0に戻す
        x = 0;

      } else if (x >= X_LENGTH) { // X座標がマス目の最大値以上なら

        // X座標を強制的に配列の最大値へ戻す
        x = X_LENGTH - 1;
      }

      if (y < 0) { // Y座標がマイナス値になら

        // X座標を強制的に0に戻す
        y = 0;

      } else if (y >= Y_LENGTH) { // Y座標がマス目の最大値以上なら

        // X座標を強制的に配列の最大値へ戻す
        y = Y_LENGTH - 1;
      }

      // 現在位置が移動不可能なエリアなら元の位置に戻す
      if (map[y][x] != 0) { // 現在位置が移動可能エリアでなければ

        switch (key) {
          case KEY_UP : // 上キーを押したなら
            y++;
            break;
          case KEY_DOWN : // 下キーを押したなら
            y--;
            break;
          case KEY_LEFT : // 左キーを押したなら
            x++;
            break;
          case KEY_RIGHT : // 右キーを押したなら
            x--;
            break;
        }
      }

    } else { // 矢印以外のキーを押したなら

      // 無限ループから抜け出す
      break;
    }
  }

  return 0;
}
