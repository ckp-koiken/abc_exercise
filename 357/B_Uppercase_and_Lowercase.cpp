#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int cnt = 0;
  for (char c : S) {
    if (c < 97) {
      cnt++;
    }
  }

  if (cnt > ((int)S.size() - cnt)) {
    for (int i = 0; i < S.size(); i++) {
      S.at(i) = toupper(S.at(i));
    }
  } else {
    for (int i = 0; i < S.size(); i++) {
      S.at(i) = tolower(S.at(i));
    }
  }

  cout << S << endl;
  return 0;
}