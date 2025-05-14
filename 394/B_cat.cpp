#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);

  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  vector<int> size(N);
  for (int i = 0; i < N; i++) {
    size.at(i) = S.at(i).size();
  }

  for (int j = 0; j < N - 1; j++) {
    for (int i = 0; i < N - 1; i++) {
      if (size.at(i) > size.at(i + 1)) {
        string tmp;
        tmp = S.at(i);
        S.at(i) = S.at(i + 1);
        S.at(i + 1) = tmp;

        int tm;
        tm = size.at(i);
        size.at(i) = size.at(i + 1);
        size.at(i + 1) = tm;
      }
    }
  }

  for (string a : S) {
    cout << a;
  }
  cout << endl;

  return 0;
}

// another answer
// int main() {
//   int n;
//   cin >> n;
//   vector<string> s(n);
//   for (int i = 0; i < n; i++) {
//     cin >> s.at(i);
//   }
//
//   // ラムダ式で文字列の長さを比較する関数を作る。[&]で引数参照。
//   // sortのルールを比較関数で定義
//   // 引数2つ、デフォルトはx < yで値の大きさを比較
//   sort(s.begin(), s.end(),
//        [&](string x, string y) { return x.size() < y.size(); });
//   string ans = "";
//   for (int i = 0; i < n; i++) {
//     ans += s.at(i);
//   }
//   cout << ans << endl;
//   return 0;
// }