#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (B.at(i) == A.at(j)) {
        A.at(j) = -1;
        break;
      }
    }
  }

  for (int a : A) {
    if (a != -1) cout << a << " ";
  }
  cout << endl;
  return 0;
}

// another answer
// Bの要素をAの要素から探して（find）
// 見つけたら削除する（erase）
// 削除済みの配列Aを作ってまとめて表示する
// int main() {
//   int n, m;
//   cin >> n >> m;
//   vector<int> a(n);
//   for (int i = 0; i < n; i++) cin >> a.at(i);
//   for (int i = 0; i < m; i++) {
//     int b;
//     cin >> b;
//     // 読み取ったbを配列aの中から探す（find関数を使う）
//     // 見つけた場所のイテレータが帰ってくる
//     auto it = find(a.begin(), a.end(), b);
//     // a.end()が返ってきたら見つからなかったということなので
//     // 何も処理せず次のループに進む
//     if (it == a.end()) continue;
//     // bが見つかればイテレータの位置を削除（erase関数を使う）
//     a.erase(it);
//   }

//   // まとめて表示
//   for (int i = 0; i < a.size(); i++) {
//     cout << a.at(i) << " ";
//   }
//   cout << endl;
//   return 0;
// }