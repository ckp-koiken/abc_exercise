#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<char> T(N), A(N);
  for (int i = 0; i < N; i++) {
    cin >> T.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  // charの配列ではなく文字列として受け取った方が楽
  // string T, A;
  // cin >> T >> A

  for (int i = 0; i < N; i++) {
    if (T.at(i) == 'o' && A.at(i) == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}