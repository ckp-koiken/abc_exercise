#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, N, Q, P;
  cin >> X >> N;
  vector<int> W(N);
  for (int i = 0; i < N; i++) cin >> W[i];
  cin >> Q;

  vector<bool> W_a(N);
  for (int i = 0; i < Q; i++) {
    int P;
    cin >> P;

    if (!W_a[P - 1]) {
      W_a[P - 1] = true;
      X += W[P - 1];
    } else {
      W_a[P - 1] = false;
      X -= W[P - 1];
    }

    cout << X << endl;
  }
  return 0;
}