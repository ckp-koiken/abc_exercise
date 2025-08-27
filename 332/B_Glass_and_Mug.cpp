#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, G, M;
  cin >> K >> G >> M;

  int grass = 0;
  int mug = 0;
  int water;
  for (int i = 0; i < K; i++) {
    if (grass == G) {
      grass = 0;
    } else if (mug == 0) {
      mug = M;
    } else {
      for (;;) {
        if (mug > G) {
          water = min(G - grass, mug);
          grass += water;
          mug -= water;
        } else {
          grass += mug;
          mug = 0;
        }
        if (mug == 0 || grass == G) break;
      }
    }
  }

  cout << grass << " " << mug << endl;
  return 0;
}