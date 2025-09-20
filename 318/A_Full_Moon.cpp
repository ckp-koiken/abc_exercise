#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, P;
  cin >> N >> M >> P;

  int moon = (N - M) / P + 1;

  if (N < M) {
    cout << 0 << endl;
  } else {
    cout << moon << endl;
  }
  
  return 0;
}