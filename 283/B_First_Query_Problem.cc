#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;

  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  cin >> Q;

  for (int i = 0; i < Q; i++) {
    int num, k, x;
    cin >> num;
    
    if (num == 1) {
      cin >> k >> x;
      A[k - 1] = x;
    }

    if (num == 2) {
      cin >> k;
      cout << A[k - 1] << endl;
    }
  }

  return 0;
}