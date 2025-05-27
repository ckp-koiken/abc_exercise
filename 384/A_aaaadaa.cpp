#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  char c1, c2;
  string S;
  cin >> N >> c1 >> c2 >> S;
  for (int i = 0; i < N; i++) {
    if (S.at(i) != c1) {
      S.at(i) = c2;
    }
  }
  cout << S << endl;
  return 0;
}

// another answer
  // Sを一文字ずつ見て、c1ならtにc1を連結
  // c1でないならtにc2を連結する
  // string t = "";
  // for (char c : S) {
  //   t += c == c1 ? c1 : c2;
  // }
  // cout << t << endl;
