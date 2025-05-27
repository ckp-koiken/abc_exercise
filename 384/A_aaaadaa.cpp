#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  char c1, c2;
  string S;
  cin >> N >> c1 >> c2 >> S;
  for (int i = 0; i < N; i++) {
    if (S.at(i) != c1) {
      S.at(i) = c2;
    }
  }
  cout << S << endl;
  return 0;
}
