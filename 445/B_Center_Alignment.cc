#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  
  int m = 0;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    int tmp = (int)s.size();
    m = max(m, tmp);
    S[i] = s;
  }

  for (int i = 0; i < N; i++) {
    int len =  m - (int)S[i].size();

    for (int j = 0; j < len / 2; j++) {
      cout << '.';
    }

    cout << S[i];

    for (int j = 0; j < len / 2; j++) {
      cout << '.';
    }

    cout << '\n';
  }

  
  return 0;
}