#include <bits/stdc++.h>
using namespace std;

int main() {
  int L1, R1, L2, R2;
  cin >> L1 >> R1 >> L2 >> R2;

  vector<int> data(100);

  for (int i = L1; i < R1; i++) {
    data[i]++;
  }

  for (int i = L2; i < R2; i++) {
    data[i]++;
  }

  int ans = 0;
  for (int d : data) { 
    if (d == 2) ans++;
  }

  cout << ans << endl;
  return 0;
}