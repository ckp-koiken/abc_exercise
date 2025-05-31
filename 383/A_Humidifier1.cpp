#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> T(N);
  vector<int> V(N);
  for (int i = 0; i < N; i++) {
    cin >> T.at(i) >> V.at(i);
  }

  int w = 0;
  for (int i = 0; i < N; i++) {
    if (w == 0) {
      w += V.at(i);
    } else {
      w -= (T.at(i) - T.at(i - 1));
      if (w < 0) w = 0;
      w += V.at(i);
    }
  }

  cout << w << endl;
  return 0;
}