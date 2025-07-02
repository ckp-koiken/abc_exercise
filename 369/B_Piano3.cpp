#include <bits/stdc++.h>
using namespace std;

int main() { 
  int N, A;
  string S;
  cin >> N;

  int left_pos = 0;
  int right_pos = 0;
  int left_h = 0;
  int right_h = 0;
  for (int i = 0; i < N; i++) {
    cin >> A >> S;
    if (S == "L") {
      if (left_pos == 0) {
        left_pos = A;
        continue;
      }
      left_h += abs(A - left_pos);
      left_pos = A;
    } 

    if (S == "R") {
      if (right_pos == 0) {
        right_pos = A;
        continue;
      }
      right_h += abs(A - right_pos);
      right_pos = A;
    }
  }

  cout << left_h + right_h << endl;
  
  return 0;
}

// another answer
// int main() {
//   int n;
//   cin >> n;
//   // 左手と右手を管理する配列を用意
//   vector<int> pos = {-1, -1}; // 0: left, 1: right
//   int ans = 0;
//   for (int i = 0; i < n; i++) {
//     int a;
//     char s;
//     cin >> a >> s;
//     int hand = (s == 'R');  // 左手なら0、右手なら1
//     // 左手・右手を0/1で参照して移動するたびに加算
//     // 初期位置の-1からの移動は加算しないようにする
//     if (pos.at(hand) != -1) ans += abs(pos.at(hand) - a);
//     pos.at(hand) = a;
//   }
//   cout << ans << endl;
// }