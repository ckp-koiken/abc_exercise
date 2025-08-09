#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A;
  int a;

  for (;;) {
    cin >> a;
    A.push_back(a);
    if (a == 0) break;
  }

  reverse(A.begin(), A.end());

  for (int &x : A) {
    cout << x << endl;
  }
  return 0;
}