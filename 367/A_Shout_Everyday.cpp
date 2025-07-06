#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  // 日をまたいで就寝しているときと日をまたがない時とで場合わけする
  // 例）21-7就寝、8-14就寝

  // 日をまたがない場合(B < C)
  // 寝てる時間で判断
  if (B < C) {
    if (B < A && A < C) { // 寝ている時間は叫べない
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  } else {  // 日をまたぐ場合(C < B)
    // 起きている時間で判断
    if (C < A && A < B) {
      cout << "Yes" << endl;  // 起きている時間であれば叫べる
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}