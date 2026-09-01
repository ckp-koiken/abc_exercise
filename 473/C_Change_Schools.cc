#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> member_count(K);
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    A--;
    member_count[A]++;
  }

  int M = *max_element(member_count.begin(), member_count.end());
  int ans = 0;
  for (int i = 0; i < K; i++) {
    if (member_count[i] >= M - 1) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}