#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  for (int i = 0; i < 998244353; i++) {
    if ((N - i) % 998244353 == 0) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}