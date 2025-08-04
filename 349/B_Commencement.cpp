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
  
  for (int index = 1; index <= 100; index++) {
    int cnt = 0;
    for (auto d : data) {
      if (d.second == index) cnt++;
    }
    if (cnt != 0 && cnt != 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}