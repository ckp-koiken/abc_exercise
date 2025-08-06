#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, A;
  cin >> N >> K;
  vector<int> ans;

  for (int i = 0; i < N; i++) {
    cin >> A;
    if (A % K == 0) {
      ans.push_back(A / K);
    }
  }

  sort(ans.begin(), ans.end());

  for (int a : ans) {
    cout << a << " ";
  }

  cout << endl;
  return 0;
}