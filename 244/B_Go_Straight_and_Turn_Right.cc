#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string T;
  cin >> N >> T;

  int x = 0;
  int y = 0; 
  int d = 0;

  for (int i = 0; i < N; i++) {
    if (T[i] == 'S') {
      if (d == 0) x++;
      if (d == 1) y--;
      if (d == 2) x--;
      if (d == 3) y++;
    }
    if (T[i] == 'R') d = (d + 1) % 4;
  }

  cout << x << ' ' << y << endl;

  return 0;
}