#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, vector<int>> ma;
  for (int i = 1; i <= N; i++) {
    int k;
    cin >> k;
    vector<int> aa(k);
    for (int j = 0; j < k; j++) cin >> aa[j];

    ma[i] = aa;
  }

  for (int pi = 1; pi <= N; pi++) {
    vector<int> cnt;

    for (int i = 1; i <= N; i++) {
      for (int a : ma[i]) {
        if (a == pi) {
          cnt.push_back(i);
        }
      }
    }

    int m = (int)cnt.size();
    cout << m << ' ';

    for (int c : cnt) {
      cout << c << ' ';
    }
    cout << '\n';
  }
  return 0;
}