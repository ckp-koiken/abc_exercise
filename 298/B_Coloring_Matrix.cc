#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N));
  vector<vector<int>> B(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> B[i][j];
    }
  }
  
  // 回転を4回まで繰り返す
  for (int k = 0; k < 4; k++) {
    bool ok = true;

    // A[i][j]が1のときB[i][j]が0であると失敗なのでfalseに
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (A[i][j] == 1 && B[i][j] == 0) {
          ok = false;
        }
      }
    }

    // trueならyesを表示して終了
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }

    // 回転させる
    // 回転作業のための一次的な配列tmpを用意しておく
    vector<vector<int>> tmp(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        // 定義上A[N + 1 - j][i]だが
        // プログラム上の添え字が0始まりなので要調整
          // 例: N=3でj=0のとき1回転でj=2になってほしい
          // N+1-jだと4になるので、N-1-jとして調整
        tmp[i][j] = A[N - 1 - j][i];
      }
    }
    A = tmp;

  }

  cout << "No" << endl;

  return 0;
}
