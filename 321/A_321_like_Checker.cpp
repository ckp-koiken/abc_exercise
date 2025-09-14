#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  string S = to_string(N);
  int d = (int)S.size();

  // MEMO: そのまま文字列として受け取ってもいい
  // string s;
  // cin >> s;

  for (int i = 0; i < d - 1; i++) {
    if (S[i] <= S[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}

// another answer
// Nを10で割り続けて各桁に分解する
// 桁の数値を配列に格納して比較する（反転してから比較）
// int main() {
//   int n;
//   cin >> n;
//   vector<int> d;

//   while (n > 0) {
//     d.push_back(n % 10);
//     n /= 10;
//   }
//   // 桁が逆順に格納されるので逆にしてから比較する
//   reverse(d.begin(), d.end());

//   for (int i = 0; i < (int)d.size() - 1; i++) {
//     if (d.at(i) <= d.at(i + 1)) {
//       cout << "No" << endl;
//       return 0;
//     }
//   }

//   cout << "Yes" << endl;
//   return 0;
// }