#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N - 1; i++) {
    cin >> A.at(i);
  }

  while (A.back() <= 100) {
    vector<int> B = A;
    sort(B.begin(), B.end());
    int s = 0;
    for (int i = 1; i < N - 1; i++) {
      s += B.at(i);
    }
    if (s >= X) {
      cout << A.back() << endl;
      return 0;
    } 
    A.back()++;
  }

  cout << - 1 << endl;
  return 0;
}