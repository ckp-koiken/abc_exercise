#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1);
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  vector<bool> call(N + 1);
  for (int i = 1; i <= N; i++) {
    if (!call[i]) {
      call[A[i]] = true;
    }
  }

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    if (!call[i]) ans++;
  }
  cout << ans << endl;

  for (int i = 1; i <= N; i++) {
    if (!call[i]) cout << i << " ";
  }

  cout << '\n';
  return 0;
}