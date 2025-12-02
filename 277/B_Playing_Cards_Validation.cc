#include <bits/stdc++.h>
using namespace std;

bool check_string(string s) {
  bool ok1, ok2;
  if (s[0] == 'H' || s[0] == 'D' || s[0] == 'C' || s[0] == 'S') {
    ok1 = true;
  } else {
    ok1 = false;
  }

  if (s[1] == 'A' || s[1] == '2' || s[1] == '3' || s[1] == '4' || s[1] == '5' ||
      s[1] == '6' || s[1] == '7' || s[1] == '8' || s[1] == '9' || s[1] == 'T' ||
      s[1] == 'J' || s[1] == 'Q' || s[1] == 'K') {
    ok2 = true;
  } else {
    ok2 = false;
  }

  return ok1 && ok2;
}

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  bool ans = true;
  for (int i = 0; i < N; i++) {
    ans = ans && check_string(S[i]);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;

      if (S[i] == S[j]) ans = false;
    }
  }
  

  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}