#include <bits/stdc++.h>
using namespace std;

// Pについて1〜Nまでの順列を全て試して
// 2つ目の条件を満たすかを確かめる
// next_permutationを使う
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int &a : A) cin >> a;

  // 長さNの整数列Pを作る
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    P.at(i) = i + 1;
  }
  // xから始まる整数列を作りたいときiotaを使うと便利
  // iota(P.begin(), P.end(), 1);

  // next_permutationでPの全ての順列を試す
  do {
    // 2つめの条件を満たしているか確認
    bool ok = true;
    for (int i = 0; i < N; i++) {
      // A.at(i) != -1 ならば P.at(i) == A.at(i)
      // 全てのAおよびPに関して条件を満たさなければならないので
      // okがtrueかつ2つめの条件がtrueならば条件達成
      if (ok && A.at(i) != -1) {
        ok &= P.at(i) == A.at(i);
      }

      // another answer
      // 2つめの条件を言い換えるとA.at(i) == -1 または A.at(i) == P.at(i)
      // 以下のようにも書ける
      // ok &= A.at(i) == -1 || P.at(i) == A.at(i);
    }

    // 2つめの条件がtrueのときYesを表示して
    // Pを順番に表示する
    if (ok) {
      cout << "Yes" << endl;
      for (int i = 0; i < N; i++) {
        cout << P.at(i) << " ";
      }
      cout << endl;
      return 0;
    }
  } while (next_permutation(P.begin(), P.end()));  // 順列並べ替え

  // next_permutationが全て終わっていたら2つ目の条件を満たさないのでNo
  cout << "No" << endl;
  return 0;
}