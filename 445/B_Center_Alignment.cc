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

  // another answer
  // string()関数を使って文字列を作っても良い
  // for (int i = 0; i < N; i++) {
  //   int k =  (m - (int)S[i].size()) / 2;

  //   // .をk個分+S[i]+.をk個分で合体
  //   // string(k, '.')で.をk個用意
  //   string T = string(k, '.') + S[i] + string(k, '.');

  //   cout << T << endl;
  // }
  
  return 0;
}