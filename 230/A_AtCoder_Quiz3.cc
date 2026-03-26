#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N >= 42) N++;
  
  if (N >= 10) {
    cout << "AGC0" << N << endl;
  } else {
    cout << "AGC00" << N << endl;
  }
  return 0;
}