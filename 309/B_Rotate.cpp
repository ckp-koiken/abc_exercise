#include <bits/stdc++.h>
using namespace std;

// 外側のマスを動かし方を4通りに場合分けして実装する
int main() {
  int N;
  cin >> N;

  // intの二次元配列で受け取るとスペース等で区切ってないので
  // 1011のような入力を整数1011として受け取ってしまう
  // charの二次元配列で受け取り、1文字ずつ処理する
  vector<vector<char>> A(N, vector<char>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A.at(i).at(j);
    }
  }

  // 外側を時計回りに動かした結果のchar型二次元配列を用意
  vector<vector<char>> ans(N, vector<char>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      // 条件を実装
      // 端の部分（上側から右側、右側から下側、下側から左側、左側から上側）に
      // 変わる部分を無理に移動させないのがポイント

      // 外側を考えるのでiとjがそれぞれ0またはN-1
      if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {

        // 上側（iが0でjがN-1未満まで）は右隣（i, j+1）に移動する
        if (i == 0 && j < N - 1) ans.at(i).at(j + 1) = A.at(i).at(j);

        // 右側（iがN-1未満まででjがN-1）は下隣（i+1, j）に移動する
        if (i < N - 1 && j == N - 1) ans.at(i + 1).at(j) = A.at(i).at(j);

        // 下側（iがN-1でjが0より大）は左隣（i, j-1）に移動する
        if (i == N - 1 && j > 0) ans.at(i).at(j - 1) = A.at(i).at(j);

        // 左側（iが0より大でjが0）は上隣（i-1, j）に移動する
        if (i > 0 && j == 0) ans.at(i - 1).at(j) = A.at(i).at(j);
      } else {

        // いずれの条件も満たしていなければそのままコピーする
        ans.at(i).at(j) = A.at(i).at(j);
      }
    }
  }

  // 表示
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << ans.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}
