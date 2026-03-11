#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<string> S;

  for (int i = 0; i < N; i++) {
    string tmp;
    cin >> tmp;
    if (i < K) S.push_back(tmp);
  }

  sort(S.begin(), S.end());

  for (string ss : S) {
    cout << ss << endl;
  }

  return 0;
}