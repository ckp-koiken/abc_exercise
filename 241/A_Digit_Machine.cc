#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(10);
  for (int i = 0; i < 10; i++) cin >> a[i];

  int first = a[0];
  int second = a[first];
  int third = a[second];

  cout << third << endl;
  return 0;
}