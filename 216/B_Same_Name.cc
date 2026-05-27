#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> se;

  for (int i = 0; i < N; i++) {
    string S, T;
    cin >> S >> T;
    string tmp = S + " " + T;
    se.insert(tmp);
  }

  if ((int)se.size() != N) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}