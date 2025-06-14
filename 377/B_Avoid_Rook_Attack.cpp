#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S(8);
  for (int i = 0; i < 8; i++) {
    cin >> S.at(i);
  }

  int ans = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (S.at(i).at(j) == '#') continue;
      bool ok = true;
      for (int k = 0; k < 8; k++) {
        if (S.at(i).at(k) == '#') ok = false;
      }
      for (int k = 0; k < 8; k++) {
        if (S.at(k).at(j) == '#') ok = false;
      }
      if (ok) ans++;
    }
  }
  cout << ans << endl;
  
  return 0;
}