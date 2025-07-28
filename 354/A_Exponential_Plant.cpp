#include <bits/stdc++.h>
using namespace std;

int main() {
  int H;
  cin >> H;

  int cnt = 0;
  int plant = 0;
  for (;;) {
    if (H < plant) {
      cout << cnt << endl;
      return 0;
    } else {
      plant += pow(2, cnt);
      cnt++;
    }
  }
  return 0;
}