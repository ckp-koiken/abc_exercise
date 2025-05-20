#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < N - 2; i++) {
    if ((int64_t)a.at(i + 1) * a.at(i + 1) != (int64_t)a.at(i) * a.at(i + 2)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}