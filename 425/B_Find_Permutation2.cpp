#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int &a : A) cin >> a;

  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    P.at(i) = i + 1;
  }

  do {
    bool ok = true;
    for (int i = 0; i < N; i++) {
      ok &= A.at(i) == -1 || P.at(i) == A.at(i);
    }
    if (ok) {
      cout << "Yes" << endl;
      for (int i = 0; i < N; i++) {
        cout << P.at(i) << " ";
      }
      cout << endl;
      return 0;
    }
  } while (next_permutation(P.begin(), P.end()));

  cout << "No" << endl;
  return 0;
}