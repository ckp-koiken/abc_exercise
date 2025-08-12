#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  string S;
  cin >> N >> A >> B >> S;
  
  cout << S.substr(A, N - A - B) << endl;

  // another answer
  // 消される文字の順番をN, A, Bで指定する
  // int start = A;
  // int end = N - B;
  // for (int i = start; i < end; i++) {
  //   cout << S.at(i);
  // }
  // cout << endl;

  return 0;
}