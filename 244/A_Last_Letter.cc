#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  cout << S[N - 1] << endl;
  // .back()で最後尾を表示しても良い
  // cout << S.back() << endl;
  return 0;
}