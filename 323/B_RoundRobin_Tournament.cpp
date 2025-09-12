#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> win(N);

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < N; j++) {
      if (S.at(j) == 'o') {
        win.at(i)++;
      }
    }
  }

  int high = *max_element(win.begin(), win.end());
  while (high >= 0) {
    for (int i = 0; i < N; i++) {
      if (win.at(i) == high) {
        cout << i + 1 << " ";
      }
    }
    high--;
  }
  cout << endl;

  return 0;
}

// another answer
// sortの比較関数を自分で実装することで簡単にできる
// int main() {
//   int n;
//   cin >> n;
//   vector<string> s(n);
//   for (int i = 0; i < n; i++) {
//     cin >> s.at(i);
//   }

//   // それぞれのプレイヤーの勝ち数をw(n)で記録
//   vector<int> w(n);
//   for (int i = 0; i < n ; i++) {
//     for (int j = 0; j < n; j++) {
//       if (s.at(i).at(j) == 'o') w.at(i)++;
//     }
//   }

//   // プレイヤー番号を記録
//   vector<int> ans(n);
//   for (int i = 0; i < n; i++) {
//     ans.at(i) = i;
//   }

//   // 勝ち数でプレイヤー番号をソートする
//   // sort関数だと同じ勝ち数だったときに番号が大きい順にならんでしまう
//   // 問題では同じ勝ち数だったとき番号を小さい順に並べる必要があるので
//   // sortの比較関数をラムダ式で実装
//   // （[&]以下）wの勝ち数で比較でソートし同じ勝ち数だったときはansの番号の比較で小さい順にソートする
//   sort(ans.begin(), ans.end(), [&](int a, int b) {
//     if (w.at(a) == w.at(b)) return a < b;
//     return w.at(a) > w.at(b);
//   });
//   // MEMO: 比較関数を実装したくなければ、
//   // 勝ち数にマイナスを掛けて負の数にし、
//   // 勝ち数の小さい順にソートすれば同じ結果になる

//   for (int i = 0; i < n; i++) {
//     cout << ans.at(i) + 1 << " ";
//   }

//   cout << endl;
//   return 0;
// }