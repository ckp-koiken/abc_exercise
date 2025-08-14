#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  map<char, int> data;
  for (char c : S) {
    if (data.count(c)) {
      data.at(c)++;
    } else {
      data[c] = 1;
    }
  }
  char target;
  for (auto d : data) {
    if (d.second == 1) target = d.first;
  }

  for (int i = 0; i < (int)S.size(); i++) {
    if (S.at(i) == target) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}