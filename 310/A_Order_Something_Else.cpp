#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  for (int &d : D) cin >> d;

  int min = *min_element(D.begin(), D.end());
  int dis = Q + min;

  if (P > dis) {
    cout << dis << endl;
  } else {
    cout << P << endl;
  }

  return 0;
}