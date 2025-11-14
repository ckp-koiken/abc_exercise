#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  int ans = 0;
  for (int i = 0; i < H; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < W; j++) {
      if (S[j] == '#') ans++;
    }
  }

  cout << ans << endl;
  return 0;
}