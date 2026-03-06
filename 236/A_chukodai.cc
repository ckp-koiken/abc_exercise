#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int a, b;
  cin >> S >> a >> b;

  a--, b--;
  char ac = S[a];
  char bc = S[b];

  for (int i = 0; i < a; i++) {
    cout << S[i];
  }

  cout << bc;

  for (int i = a + 1; i < b; i++) {
    cout << S[i];
  }

  cout << ac;

  for (int i = b + 1; i < (int)S.size(); i++) {
    cout << S[i];
  }

  cout << '\n';
  
  // another answer
  // 直接Sの該当文字を入れ替えてもよい
  // a--, b--;
  // char tmp = S[a];
  // S[a] = S[b];
  // S[b] = tmp;

  // cout << S << endl;

  return 0;
}