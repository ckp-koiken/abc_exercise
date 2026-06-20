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
  return 0;
}