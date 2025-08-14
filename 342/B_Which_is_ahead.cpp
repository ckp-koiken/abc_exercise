#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }
  int Q;
  cin >> Q;
  vector<int> A(Q);
  vector<int> B(Q);
  for (int i = 0; i < Q; i++) {
    cin >> A.at(i);
    cin >> B.at(i);
  }

  for (int i = 0; i < Q; i++) {
    int a_index, b_index;
    for (int j = 0; j < N; j++) {
      if (A.at(i) == P.at(j)) {
        a_index = j;
      }
      if (B.at(i) == P.at(j)) {
        b_index = j;
      }
    }
    if (a_index < b_index) {
      cout << A.at(i) << endl;
    } else {
      cout << B.at(i) << endl;
    }
  }
  return 0;
}