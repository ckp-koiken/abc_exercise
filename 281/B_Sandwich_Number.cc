#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  int len = (int)S.size();  
  if (len != 8) {
    cout << "No" << endl;
    return 0;
  }

  char first, last;
  string mid;

  first = *S.begin();
  last = *(S.end() - 1);
  
  mid = S.substr(1, 6);
  int mid_n = stoi(mid);

  // MEMO: >= 'A' && <= 'Z' でも良い
  if (!(first >= 65 && first <= 90)) {
    cout << "No" << endl;
    return 0;
  }

  if (!(last >= 65 && last <= 90)) {
    cout << "No" << endl;
    return 0;
  }

  if (!(mid_n >= 100000 && mid_n <= 999999)) {
    cout << "No" << endl;
    return 0;
  }
  // MEMO: 真ん中7文字の数字をチェックして
  // 7桁の数字がそれぞれ10進数のどれかであることを確認してもよい
  // 1桁目（S[1]）が1以上であることがマスト

  cout << "Yes" << endl;

  return 0;
}