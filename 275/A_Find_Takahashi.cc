#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    cin >> H[i];
    cnt = max(cnt, H[i]);
  }

  for (int i = 0; i < N; i++) {
    if (H[i] == cnt) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  // another answer
  // max_elementをつかう
  // 最大要素のイテレータと先頭との距離から算出
  // cout << max_element(H.begin(), H.end()) - H.begin() + 1 << endl;

  return 0;
}