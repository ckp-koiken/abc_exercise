#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  map<string, int> ma;
  for (int i = 0; i < N - K + 1; i++) {
    string tmp_s = S.substr(i, K);
    if (!ma.count(tmp_s)) {
      ma[tmp_s] = 1;
    } else {
      ma[tmp_s]++;
    }
  }

  int freq = 0;
  for (auto m : ma) freq = max(freq, m.second);

  cout << freq << endl;
  for (auto m : ma) {
    if (m.second == freq) cout << m.first << " ";
  }
  cout << endl;
  return 0;
}