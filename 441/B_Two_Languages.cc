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
