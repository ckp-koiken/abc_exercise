#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(10);
  for (int i = 0; i < 10; i++) cin >> a[i];

  int first = a[0];
  int second = a[first];
  int third = a[second];

  cout << third << endl;

  // another answer
  // numを更新し続けてfor文でも良い
  // int num = 0;
  // for (int i = 0; i < 3; i++) {
  //   num = a[num];
  // }

  // cout << num << endl;
  return 0;
}