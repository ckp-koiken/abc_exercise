#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> pos;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '#') {
      pos.push_back(i + 1);
    }
  }

  int cnt = 0;
  for (int i = 0; i < pos.size(); i++) {
    cout << pos.at(i);
    cnt++;
    if (cnt < 2) {
      cout << ",";
      cnt++;
    } else {
      cout << endl;
      cnt = 0;
    }
  }
  return 0;
}