#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int saikyo_p = P.at(0);
  int saikyo_i = 0;
  for (int i = 1; i < N; i++) {
    if (saikyo_p <= P.at(i)) {
      saikyo_p = P.at(i);
      saikyo_i = i;
    }
  }
  if (saikyo_i == 0 && saikyo_p == P.at(0)) {
    cout << 0 << endl;
  } else {
    cout << saikyo_p + 1 - P.at(0) << endl;
  }

  return 0;
}