#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  vector<int> ball;
  int num, x;

  for (int i = 0; i < Q; i++) {
    cin >> num;
    if (num == 1) {
      cin >> x;
      ball.push_back(x);
      sort(ball.begin(), ball.end());
    }

    if (num == 2) {
      for (int j = 0; j < (int)ball.size(); j++) {
        if (ball.at(j) > 0) {
          cout << ball.at(j) << endl;
          ball.at(j) = -1;
          break;
        }
      }
      // another answer
      // 配列の最小値を取るときmin_element()を使うと最小値のイテレータが返ってくる
      // auto it = min_element(ball.begin(), ball.end());
      // cout << *it << endl;
      // ball.erase(it);  // eraseにイテレータを渡して当該要素を消す
    }
  }
  return 0;
}