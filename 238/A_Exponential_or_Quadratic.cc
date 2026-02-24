#include <bits/stdc++.h>
using namespace std;

// 2^nとn^2を実際に計算するとnの上限の関係からものすごく大きくなる
// 基本的に2^nの方が大きくなる
// 逆にnの値がどこまでであれば2^n <= n^2となるかをためしてみる
// nが2, 3, 4のときは2^n <= n^2なのでそれ以外をyesにすればよい
int main() {
  int n;
  cin >> n;

  if (2 <= n && n <= 4) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  
  return 0;
}