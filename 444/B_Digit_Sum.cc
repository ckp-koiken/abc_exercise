#include <bits/stdc++.h>
using namespace std;

int cal_dig(int n) {
  string s = to_string(n);
  int size = (int)s.size();
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += (s[i] - '0');
  }
  return total;
}

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int num = cal_dig(i);
    if (num == K) ans++;
  }

  cout << ans << endl;

  return 0;
}