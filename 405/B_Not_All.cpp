#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  // 0からN回まで末尾を削除する
  // それぞれの回で1~Nまでの数が全部揃っているかを調べる
  for (int num = 0; num < N + 1; num++) {
    // 要素が重複しないコンテナsetを使う
    // 配列Aをsetにまとめて要素の種類数を求める
    set<int> st;
    for (int x : A) {
      st.insert(x);
    }
    // set<int> st(A.begin(), A.end());　でも書ける

    // setのサイズがMでないならば処理を終了
    if (st.size() != M) {
      cout << num << endl;
      return 0;
    }
    // setのサイズがMなら1~Nまでの数が全部揃っているので
    // 末尾をpop_back()で削除
    A.pop_back();
  }
  return 0;
}