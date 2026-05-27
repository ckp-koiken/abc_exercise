#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> se;

  for (int i = 0; i < N; i++) {
    string S, T;
    cin >> S >> T;
    string tmp = S + " " + T;
    se.insert(tmp);
  }

  if ((int)se.size() != N) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

// another answer
// 単純に姓と名が一致しているかどうかを全探索してもよい
// int main() {
//   int n;
//   cin >> n;
//   vector<string> s(n), t(n);

//   string ans = "No";
//   for (int i = 0; i < n; i++) {
//     cin >> s[i] >> t[i];
//     for (int j = 0; j < i; j++) {
//       if (s[i] == s[j] && t[i] == t[j]) ans = "Yes";
//     }
//   }

//   cout << ans << endl;
// }