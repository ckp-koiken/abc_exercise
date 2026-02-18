#include <bits/stdc++.h>
using namespace std;

void judge(vector<int> a, int l) {
  while (a.size() && a.back() == l) a.pop_back();
  int n = a.size();
  if (n % 2 == 1) return;

  for (int i = 0; i < n / 2; i++) {
    if (a[i] + a[n - 1 - i] != l) return;
  }
  cout << l << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  
  judge(a, a.back());
  judge(a, a[0] + a.back());
  return 0;
}