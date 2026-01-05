#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int res = N;
  for (int i = 0; i < 10; i++) {
    string num = to_string(res);
    vector<int> check;
    int m = (int)num.size();

    for (int j = 0; j < m; j++) {
      check.push_back(num[j] - '0');
    }

    res = 0;
    for (int c : check) {
      res += c * c;
    }

    if (res == 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
