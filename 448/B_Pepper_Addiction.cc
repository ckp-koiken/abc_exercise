#include <bits/stdc++.h>
using namespace std;

// 各料理でかけることのできる種類A_iごとのコショウごとに
// かけることのできる最大値B_iの合計値を計算する
// 種類ごとのコショウの上限値Cと上記の合計値を比較して
// 小さい方を足していけばよい
int main() {
  int N, M;
  cin >> N >> M;

  // 種類ごとのコショウ上限値
  vector<int> C(M);
  for (int i = 0; i < M; i++) cin >> C[i];

  // 料理にかけるコショウの種類（A）ごとにコショウの上限（B）の合計を管理する配列
  vector<int> sumB(M);

  // N種類の料理aとコショウの上限bを入力
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;

    // 配列の添え字のためにaを1引く
    a--;

    // aごとにbを加えていく
    sumB[a] += b;
  }

  int ans = 0;

  // M種類のコショウごとにコショウの上限値CとsumBに記録された合計値を比較
  // 上限値Cを超えてコショウをかけることはできないので小さい方を足していく
  for (int i = 0; i < M; i++) {
    ans += min(C[i], sumB[i]);
  }

  cout << ans << endl;
  
  return 0;
}