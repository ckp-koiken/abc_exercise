#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  // iが1からN-1まで全探索
  for (int i = 1; i < N; i++) {

    // 問題文でのi+lを示すjが1からNまで全探索
    for (int j = 1; j <= N; j++) {

      // j-1番目とiの数だけ離れたSの文字が同じとき
      // そのときの位置であるj-1を出力
      if (S[j - 1] == S[i + j - 1]) {
        cout << j - 1 << endl;
        break;
      }

      // i+j>Nのとき
      // Sを全部探索しきったとき
      // 最後の位置j-1を出力
      if (i + j > N) {
        cout << j - 1 << endl;
        break;
      }
    }
  }
  return 0;
}