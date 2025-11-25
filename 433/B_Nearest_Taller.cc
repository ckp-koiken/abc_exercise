#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  for (int i = 0; i < N; i++) {
    int num = -2;
    for (int j = 0; j < i; j++) {
      if (A[i] < A[j]) {
        num = max(num, j);
      }
    }
    cout << num + 1 << endl;
  }
  return 0;
}