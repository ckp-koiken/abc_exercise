#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int n100 = N / 100;
  int n10 = (N % 100) / 10;
  int n1 = (N % 100) % 10;

  if (n100 == n10 && n10 == n1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}