#include <bits/stdc++.h>
using namespace std;

// 爆破した座標を管理する配列を作って管理する
int main() {
  int R, C;
  cin >> R >> C;
  vector<string> B(R);
  for (int i = 0; i < R; i++) {
    cin >> B[i];
  }

  // 爆破した座標をboolで管理
  // 全部falseで初期化して爆破されたところはtrueに
  vector<vector<bool>> blasted(R, vector<bool>(C));

  // Bを全探索して爆弾の位置（数値の位置）を探す
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      // 数値以外だったらcontinue
      // isdigitで文字が数値であるかを判定
      if (!isdigit(B[i][j])) continue;
      
      // 爆破距離を文字'0'との距離で計算
      int power = B[i][j] - '0';

      // 爆破座標を示す配列を操作
      for (int ni = 0; ni < R; ni++) {
        for (int nj = 0; nj < C; nj++) {
          // i,j との距離が爆破距離以下の座標をtrueに
          if (abs(i - ni) + abs(j - nj) <= power) {
            blasted[ni][nj] = true;
          }
        }
      }
    }
  }

  // blastedに沿って爆破された座標を'.'にする
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (blasted[i][j]) B[i][j] = '.';
    }
  }

  // 表示
  for (string s : B) cout << s << endl;

  return 0;
}