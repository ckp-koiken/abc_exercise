#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  if (N % 5 >= 3) {
    cout << (N / 5 + 1) * 5 << endl;
  } else {
    cout << (N / 5) * 5 << endl;
  }

  // another answer
  // 5で割った時に四捨五入すればいい
  // round()を使うと簡単
  // cout << int(round(N / 5.0)) * 5 << endl;

  return 0;
}
