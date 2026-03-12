#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int max_num = *max_element(A.begin(), A.end());
  set<int> se(A.begin(), A.end());

  for (int i = 0; i <= max_num + 1; i++) {
    if (!se.count(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}