#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  int num, x;
  vector<int> A;
  for (int i = 0; i < Q; i++) {
    cin >> num >> x;

    if (num == 1) {
      A.push_back(x);
    }

    if (num == 2) {
      int m = (int)A.size();
      cout << A.at(m - x) << endl;
    }
  }
  return 0;
}