#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  map<char, int> data;

  for (int i = 0; i < (int)S.size(); i++) {
    if (data.count(S.at(i))) {
      data.at(S.at(i))++;
    } else {
      data[S.at(i)] = 1;
    }
  }

  int tmp = 0;
  char let;
  for (auto d : data) {
    if (tmp < d.second) {
      tmp = d.second;
      let = d.first;
    }
  }
  cout << let << endl;
  return 0;
}