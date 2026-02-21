#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  cout << "Of" << static_cast<char>(tolower(S[0]));
  
  for (int i = 1; i < (int)S.size(); i++) {
    cout << S[i];
  }
  
  cout << '\n';

  // another answer
  // 文字列を連結して答えの文字列を作ってから答える
  // string ans = S;
  // ans[0] = tolower(ans[0]);
  // ans = "Of" + ans;

  // cout << ans << endl;
  return 0;
}