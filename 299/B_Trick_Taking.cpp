#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;

  vector<int> C(N);
  vector<int> R(N);
  for (int i = 0; i < N; i++) cin >> C[i];
  for (int i = 0; i < N; i++) cin >> R[i];

  map<int, int> ma;
  for (int i = 0; i < N; i++) {
    if (!ma.count(C[i])) {
      ma[C[i]] = R[i];
    } else {
      ma[C[i]] = max(R[i], ma[C[i]]);
    }
  }

  int max_point = 0;
  if (ma.count(T)) {
    max_point = ma[T];
  } else {
    int target_color = C[0];
    max_point = ma[target_color];
  }

  for (int i = 0; i < N; i++) {
    if (R[i] == max_point) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}