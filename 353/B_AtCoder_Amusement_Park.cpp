#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int cnt = 0;
  int vac = K;
  for (int i = 0; i < N; i++) {
    if (A.at(i) > vac) {
      cnt++;
      vac = K;
    } 
    vac -= A.at(i);
  }
  cnt++;

  cout << cnt << endl;
  return 0;
}