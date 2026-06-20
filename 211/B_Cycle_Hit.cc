#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string ,int> ma;

  for (int i = 0; i < 4; i++) {
    string S;
    cin >> S;
    ma[S]++;
  }
  
  for (auto m : ma) {
    if (m.second != 1) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  // another answer
  // 配列を利用してi,jが異なるSi=Sjが存在することをNoと判定しても良い
  // vector<string> S(4);
  // for (int i = 0; i < 4; i++) cin >> S[i];

  // // 配列を2重ループで見ていく
  // for (int i = 0; i < 4; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     // 添え字が違うのに同じ文字列があればどれかが被っている
  //     if (i != j && S[i] == S[j]) {
  //       cout << "No" << endl;
  //       return 0;
  //     }
  //   }
  // }
  // cout << "Yes" << endl;
  return 0;
}