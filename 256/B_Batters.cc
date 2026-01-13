#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int P = 0;
  vector<int> pos(4);
  for (int i = 0; i < N; i++) {
    pos[0]++;

    vector<int> next(4);
    for (int j = 0; j < 4; j++) {
      int nj = j + A[i];

      if (nj >= 4) {
        P += pos[j];
      } else {
        next[nj] += pos[j];
      }
      
    }
    pos = next;
  }

  cout << P << endl;
  return 0;
}
