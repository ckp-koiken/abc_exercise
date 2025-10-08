#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  if (N <= 1e3-1) {
    cout << N << endl;
  } else if (N >= 1e3 && N <= 1e4) {
    cout << N / 10 * 10 << endl;
  } else if (N >= 1e4 && N <= 1e5) {
    cout << N / 100 * 100 << endl;
  } else if (N >= 1e5 && N <= 1e6) {
    cout << N / 1000 * 1000 << endl;
  } else if (N >= 1e6 && N <= 1e7) {
    cout << N / 10000 * 10000 << endl;
  } else if (N >= 1e7 && N <= 1e8) {
    cout << N / 100000 * 100000 << endl;
  } else if (N >= 1e8 && N <= 1e9) {
    cout << N / 1000000 * 1000000 << endl;
  }

  return 0;
}
