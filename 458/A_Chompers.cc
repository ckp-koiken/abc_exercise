#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int N;
  cin >> S >> N;

  int m = (int)S.size();

  for (int i = N; i < m - N; i++) {
    cout << S[i];
  }

  cout << '\n';

  // another answer
  // 最初n文字と最後n文字を除いた部分文字列を抽出しても良い
  // substr(i, x)でi文字目から長さxの範囲を取得
  // string ans = S.substr(N, (int)S.size() - N * 2);
  // cout << ans << endl;
  
  return 0;
}