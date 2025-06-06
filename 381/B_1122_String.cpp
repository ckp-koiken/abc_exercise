#include <bits/stdc++.h>
using namespace std;

// TODO: add another answer
int main() {
  string T;
  cin >> T;

  if (T.size() % 2 != 0) {
    cout << "No" << endl;
    return 0;
  }
  
  for (int i = 0; i < T.size() / 2 - 1; i++) {
    if (T.at(i * 2) != T.at(i * 2 + 1)) {
      cout << "No" << endl;
      return 0;
    }
  }

  map<char, int> data;
  for (char c : T) {
    if (!data.count(c)) {
      data[c] = 1;
    } else {
      data.at(c)++;
    }
  }

  for (auto p : data) {
    if (p.second != 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  
  return 0;
}