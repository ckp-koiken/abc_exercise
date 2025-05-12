#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  // 後入先出なのでスタック(stack)を用いる : push, top, pop
  // 先入先出の場合はキュー(que) : push, front, pop
  stack<int> sta;
  for (int i = 0; i < 100; i++) {
    sta.push(0);  // 0を100個追加
  }

  for (int i = 0; i < Q; i++) {
    int t;
    cin >> t; // 先頭の数字を読む
    if (t == 1) {
      int x;
      cin >> x; // 先頭の数字が1なら隣の数字を追加(push)
      sta.push(x);
    } else {
      cout << sta.top() << endl; // 1でないなら最後尾の数字を取り出し(top)
      sta.pop();  // 最後尾の数字を削除(pop)
    }
  }
  return 0;
}