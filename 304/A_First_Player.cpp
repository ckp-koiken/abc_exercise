#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> S[i] >> A[i];

  int min_A = *min_element(A.begin(), A.end());
  int min_pos;
  for (int i = 0; i < N; i++) {
    if (A[i] == min_A) min_pos = i;
  }

  for (int i = min_pos; i < N + min_pos; i++) {
    int pos = i % N;
    cout << S[pos] << endl;
  }

  return 0;
}
