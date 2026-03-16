#include <bits/stdc++.h>
using namespace std;

// 二次元配列を使わなくてよく、単純にチョコレートを食べた部分の面積を求めればいい
// 複雑に考えなくて良い
// タイプ1の場合は下R行なくなるのでHからその分を引く
// タイプ2の場合は右C列なくなるのでWからその分を引く
int main() {
  int H, W, Q;
  cin >> H >> W >> Q;
  
  for (int qi = 0; qi < Q; qi++) {
    // RとCまとめてXで受け取る
    int type, X;
    cin >> type >> X;

    if (type == 1) {
      cout << X * W << endl;
      // Hから下X行なくす
      H -= X;
    }

    if (type == 2) {
      cout << X * H << endl;
      // Wから右X列なくす
      W -= X;
    }
  }

  return 0;
}