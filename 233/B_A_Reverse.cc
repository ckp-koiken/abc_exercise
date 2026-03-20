#include <bits/stdc++.h>
using namespace std;

int main() {
  int L, R;
  string S;
  cin >> L >> R >> S;

  // MEMO: イテレータは半開区感で指定する
  // reverse(first, last)なら、firstは含むがlastは含まない
  // なのでlast部分はS.begin()+Rとして1多く指定している
  reverse(S.begin() + L - 1, S.begin() + R);

  cout << S << endl;
  return 0;
}