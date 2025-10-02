#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> S(8);
  for (int &s : S) cin >> s;

  for (int i = 0; i < 7; i++) {
    if (!(S.at(i) <= S.at(i + 1))) {
      cout << "No" << endl;
      return 0;
    }
  }

  for (int i = 0; i < 8; i++) {
    if (!(S.at(i) >= 100 && S.at(i) <= 675)) {
      cout << "No" << endl;
      return 0;
    }

    if (S.at(i) % 25 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
