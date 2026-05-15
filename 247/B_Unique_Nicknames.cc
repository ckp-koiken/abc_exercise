#include <bits/stdc++.h>
using namespace std;

// 一つ目の条件から、あだ名は姓Sか名Tのどちらか
// 二つ目の条件を満たすかどうかを判断すればよい
// ある人のあだ名をどうするかによって他の人のあだ名の付け方に影響を与えない
// 各人iについてS_iとT_iのどちらかが条件を満たすかどうかを調べればよい
// 自分以外の人の姓および名のどちらとも一致しないことが条件なので
// iとjの名前同士、名字と名前が一致しなければいい（姓同士は同じでも良い）

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<string> T(N);

  for (int i = 0; i < N; i++) {
    cin >> S[i] >> T[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      // i != j条件
      if (i == j) continue;

      // 自分以外の人と姓及び名のどちらとも一致しないことの否定でNo
      if (!(S[i] != T[j] && T[i] != T[j])) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}