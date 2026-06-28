#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s[i];

  for (int ri = 0; ri < 4; ri++) {
    while (count(s.back().begin(), s.back().end(), '#') == 0) {
      s.pop_back();
      h--;
    }

    reverse(s.begin(), s.end());

    swap(h, w);
    vector<string> t(h, string(w, '.'));
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        t[i][j] = s[j][i];
      }
    }
    swap(s, t);
  }


  for (int i = 0; i < h; i++) {
    cout << s[i] << endl;
  }
  return 0;
}
