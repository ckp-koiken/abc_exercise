#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int &a : A) cin >> a;

  sort(A.begin(), A.end());
  for (int i = 0; i < N - 1; i++) {
    if (A.at(i + 1) - A.at(i) != 1) {
      cout << A.at(i) + 1 << endl;
      return 0;
    }
  }
  return 0;
}