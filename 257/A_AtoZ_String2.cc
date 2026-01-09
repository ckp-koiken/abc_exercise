#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<char> S;
  // memo: stringで用意してもいい
  // string S

  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < N; j++) {
      S.push_back('A' + i);
    }
  }

  cout << S[X - 1] << endl;
  return 0;
}
