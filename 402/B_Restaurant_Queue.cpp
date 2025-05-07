#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  // キュー・待ち行列用にqueueを用意する
  queue<int> que;

  for (int i = 0; i < Q; i++) {
    // クエリの先頭を読む
    int t;
    cin >> t;
    if (t == 1) {
      // クエリが1ならその隣のメニューをキューに追加(.push(x))
      int x;
      cin >> x;
      que.push(x);  
    } else {
      // クエリが2ならキューから順番にメニューを表示(.front())
      cout << que.front() << endl;
      // キューの先頭要素を削除(.pop())
      que.pop();
    }
  }

  return 0;
}