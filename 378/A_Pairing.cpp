#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(4);
  for (auto &a : A) cin >> a;

  map<int, int> data;
  for (int x : A) {
    if (!data.count(x)) {
      data[x] = 1;
    } else {
      data.at(x)++;
    }
  }

  int cnt = 0;
  for (auto y : data) {
    if (y.second == 2 || y.second == 3) {
      cnt++;
    } else if (y.second == 4) {
      cnt += 2;
    }
  }

  cout << cnt << endl;
  return 0;
}