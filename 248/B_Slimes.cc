#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t A, B, K;
  cin >> A >> B >> K;

  int cnt = 0;
  while (true) {
    if (A >= B) {
      cout << cnt << endl;
      return 0;
    }

    A *= K;
    cnt++;
  }
  return 0;
}