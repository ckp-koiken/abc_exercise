#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q, vol;
  bool music;
  cin >> Q;

  vol = 0;
  music = false;
  for (int i = 0; i < Q; i++) {
    int a;
    cin >> a;
    if (a == 1) {
      vol += 1;
    } else if (a == 2) {
      if (vol >= 1) {
        vol -= 1;
      }
    } else {
      if (!music) {
        music = true;
      } else {
        music = false;
      }
    }
    
    if (vol >= 3 && music) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}