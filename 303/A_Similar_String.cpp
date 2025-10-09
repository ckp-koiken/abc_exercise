#include <bits/stdc++.h>
using namespace std;

bool is_similar(char x, char y) {
  if (x == y) {
    return true;
  } else if ((x == '1' && y == 'l') || (x == 'l' && y == '1')) {
    return true;
  } else if ((x == '0' && y == 'o') || (x == 'o' && y == '0')) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;

  for (int i = 0; i < N; i++) {
    if (!is_similar(S[i], T[i])) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  // another answer
  // 似た文字列の判定を以下のようにも書ける
  // bool string_sim = true;
  // for (int i = 0; i < N; i++) {
  //   string_sim &= is_similar(S[i], T[i]);
  // }
  // cout << (string_sim ? "Yes" : "No") << endl;

  return 0;
}
