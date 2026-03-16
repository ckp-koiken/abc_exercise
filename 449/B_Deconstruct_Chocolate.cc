#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, Q;
  cin >> H >> W >> Q;
  
  for (int qi = 0; qi < Q; qi++) {
    int type, X;
    cin >> type >> X;

    if (type == 1) {
      cout << X * W << endl;
      H -= X;
    }

    if (type == 2) {
      cout << X * H << endl;
      W -= X;
    }
  }

  return 0;
}