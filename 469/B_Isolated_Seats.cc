#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int cnt = 0;

  for (int i = 0; i < N; i++) {
    // MEMO: 3条件をbool型の変数に代入してif文を書くと見やすい
    if ((S[i] == 'o') || ((i - 1) >= 0 && S[i - 1] == 'o') ||
        ((i + 1) <= N - 1 && S[i + 1] == 'o'))
      cnt++;
  }

  cout << N - cnt << endl;
  return 0;
}

// another answer
// 問題文通りに書いても良い
// int main() {
//   int n;
//   string s;
//   cin >> n >> s;

//   int ans = 0;

//   for (int i = 0; i < n; i++) {
//     bool empty = (s[i] == 'x');
//     bool leftEmpty = (i == 0 || s[i - 1] == 'x');
//     bool rightEmpty = (i == n - 1 || s[i + 1] == 'x');

//     if (empty && leftEmpty && rightEmpty) ans++;
//   }

//   cout << ans << endl;
// }