#include <bits/stdc++.h>
using namespace std;

int main() { 
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;

  if (Z >= X && Z <= Y) {
    cout << "Yes" << endl;
  } else if (Z >= Y && Z <= X) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}