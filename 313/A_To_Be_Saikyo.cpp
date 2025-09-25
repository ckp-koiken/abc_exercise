#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int saikyo_p = P.at(0);
  int saikyo_i = 0;
  for (int i = 1; i < N; i++) {
    if (saikyo_p <= P.at(i)) {
      saikyo_p = P.at(i);
      saikyo_i = i;
    }
  }
  if (saikyo_i == 0 && saikyo_p == P.at(0)) {
    cout << 0 << endl;
  } else {
    cout << saikyo_p + 1 - P.at(0) << endl;
  }

  return 0;
}

// another answer
// Pの2番目要素から最終要素までの中から最大値を最強とする
// int main() {
//   int N;
//   cin >> N;
//   vector<int> P(N);
//   for (int i = 0; i < N; i++) {
//     cin >> P.at(i);
//   }

//   // begin()+1として2番目要素から最後までの中で最大値を探す
//   int max_p = *max_element(P.begin() + 1, P.end() + 1);

//   // P.at(0)が最強の場合0を、
//   // それ以外のどれかが最強の場合差をとって1を足したものを表示
//   // maxを使う
//   cout << max(0, max_p + 1 - P.at(0)) << endl;
// }