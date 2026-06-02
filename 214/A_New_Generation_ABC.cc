#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  if (N >= 212) {
    cout << 8 << endl;
  } else if (N >= 126) {
    cout << 6 << endl;
  } else {
    cout << 4 << endl;
  }

  return 0;
}