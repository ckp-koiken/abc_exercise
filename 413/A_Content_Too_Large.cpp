#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int sum = 0;
  for (int a : A) {
    sum += a;
  }

  if (sum <= M) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}