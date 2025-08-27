#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, G, M;
  cin >> K >> G >> M;

  int grass = 0;
  int mug = 0;
  int water;
  for (int i = 0; i < K; i++) {
    if (grass == G) {
      // グラスが満たされているときグラスの中身を0にする
      grass = 0;
    } else if (mug == 0) {
      // マグカップが空のときマグカップを満たす
      mug = M;
    } else {
      for (;;) {
        if (mug > G) {
          // マグカップの水がグラスの上限よりも多く入っているとき
          // グラスにまだ入る水量とマグカップの水量とを比べて
          // 少ない方をグラスに入れる
          // 解くときにグラスにまだ入る水量(G - grass)を入れていた
          // それだとマグカップの水量がマイナスになるときがある
          water = min(G - grass, mug);
          grass += water;
          mug -= water;
        } else {
          // マグカップの水がグラスの上限よりも少ないとき
          // マグカップの水をそのままグラスに入れて
          // グラスの水量を0にする
          grass += mug;
          mug = 0;
        }
        // マグカップが0になるか、グラスが満水になったら止める
        if (mug == 0 || grass == G) break;
      }
    }
  }

  cout << grass << " " << mug << endl;
  return 0;
}