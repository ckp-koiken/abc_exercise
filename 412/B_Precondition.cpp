#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  for (int i = 1; i < S.size(); i++) {
    if (isupper(S.at(i))) {
      char target = S.at(i - 1);
      bool check = false;
      for (int j = 0; j < T.size(); j++) {
        if (T.at(j) == target) {
          check = true;
          break;
        }
      }
      if (!check) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}