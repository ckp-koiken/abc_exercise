#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  // another answer
  // char型の二次元配列はvector<string>で処理しても
  // 同じように[i][j]でアクセスできるらしい
  // vector<string> S(N);

  vector<vector<char>> S(N, vector<char>(N));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> S[i][j];
    }
  }

  set<vector<vector<char>>> se;

  // MEMO: N-M+1の+1を見落としてミスっていた
  for (int i = 0; i < N - M + 1; i++) {
    for (int j = 0; j < N - M + 1; j++) {
      vector<vector<char>> tmp(M, vector<char>(M));
      
      for (int mi = 0; mi < M; mi++) {
        for (int mj = 0; mj < M; mj++) {
          tmp[mi][mj] = S[i + mi][j + mj];
        }
      }

      se.insert(tmp);
    }
  }

  cout << se.size() << endl;

  return 0;
}