#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, Q;
  cin >> N >> M;
  string S, T;
  cin >> S >> T;
  cin >> Q;
  vector<string> W(Q);
  for (int i = 0; i < Q; i++) cin >> W[i];

  for (int i = 0; i < Q; i++) {
    int len = (int)W[i].size();
    int tak = 0;
    int aok = 0;

    for (int j = 0; j < len; j++) {
      if (S.find(W[i][j]) != string::npos) tak++;
      if (T.find(W[i][j]) != string::npos) aok++;
    }

    if (tak > aok) {
      cout << "Takahashi" << endl;
    } else if (tak < aok) {
      cout << "Aoki" << endl;
    } else {
      cout << "Unknown" << endl;
    }

  }

  return 0;
}

// another answer
// 該当する文字の数を数えるのは問題の本旨ではない
// その文字が含まれていなければその言語ではないことを利用する

/*
int main() {
  int n, m, q;
  string s, t;
  cin >> n >> m >> s >> t >> q;

  for (int qi = 0; qi < q; qi++) {
    string w;
    cin >> w;

    // Takahashi語であるか判定
    bool Takahashi = true;
    for (char c : w) {
      // cをfindして最後までカウントしていたらTakahashi語ではない
      if (find(s.begin(), s.end(), c) == s.end()) {
      // if (s.find(c) == string::npos) { // このfindでも可
        Takahashi = false;
      }
    }

    // Aoki語であるか判定
    bool Aoki = true;
    for (char c : w) {
      // cをfindして最後までカウントしていたらAoki語ではない
      if (find(t.begin(), t.end(), c) == t.end()) {
      // if (t.find(c) == string::npos) { // このfindでも可
        Aoki = false;
      }
    }

    // 両方とも満たしていたらUnknown
    // 片方ならそれに応じて表示
    if (Takahashi && Aoki) {
      cout << "Unknown" << endl;
    } else if (Takahashi) {
      cout << "Takahashi" << endl;
    } else {
      cout << "Aoki" << endl;
    }

  }
  return 0;
}
*/
