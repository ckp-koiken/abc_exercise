#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
  }

  vector<int> total(N);
  for (int i = 0; i < N; i++) {
    total.at(i) = A.at(i);
  }
  for (int i = 0; i < M; i++) {
    total.push_back(B.at(i));
  }

  sort(total.begin(), total.end());

  set<int> se(A.begin(), A.end());
  for (int i = 0; i < N + M - 1; i++) {
    if (se.count(total.at(i)) && se.count(total.at(i + 1))) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  return 0;
}