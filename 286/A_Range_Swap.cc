#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, P, Q, R, S;
  cin >> N >> P >> Q >> R >> S;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> PQ;
  vector<int> RS;

  for (int i = P - 1; i < Q; i++) {
    PQ.push_back(A[i]);
  }

  for (int i = R - 1; i < S; i++) {
    RS.push_back(A[i]);
  }

  for (int i = 0; i < N;) {
    if (i >= (P - 1) && i < Q) {
      for (int rs : RS) {
        cout << rs << " ";
      }

      i += (int)RS.size();
    } else if (i >= (R - 1) && i < S) {
      for (int pq : PQ) {
        cout << pq << " ";
      }

      i += (int)PQ.size();
    } else {
      cout << A[i] << " ";
      i++;
    }
  }

  cout << '\n';

  return 0;
}