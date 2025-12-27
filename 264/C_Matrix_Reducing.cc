#include <bits/stdc++.h>
using namespace std;

// H行 * W列のAのうちどの行と列を削除するのかを決める
// 該当する行列を全ての組み合わせで削除して
// ありうる削除結果を全て探索する
// 正攻法で行と列をそれぞれ削除していくと大変だし計算量も多い
// そこで削除する行と列番号を2進数で表現し探索する -> bit全探索
int main() {
  int h1, w1;
  cin >> h1 >> w1;
  vector<vector<int>> a(h1, vector<int>(w1));
  for (int i = 0; i < h1; i++) {
    for (int j = 0; j < w1; j++) {
      cin >> a[i][j];
    }
  }
  int h2, w2;
  cin >> h2 >> w2;
  vector<vector<int>> b(h2, vector<int>(w2));
  for (int i = 0; i < h2; i++) {
    for (int j = 0; j < w2; j++) {
      cin >> b[i][j];
    }
  }

  // 行と列を削除するかどうかを二進数で管理する（101010で0の部分を削除するようなイメージ）
  // シフト演算子（<<）で1をh1とw1だけシフトし二進数でh1(w1)回ループ
  for (int hs = 0; hs < (1 << h1); hs++) {
    for (int ws = 0; ws < (1 << w1); ws++) {
      // 残っている行、列だけを配列に残す
      vector<int> is, js;

      // 残っている行を抽出
      for (int i = 0; i < h1; i++) {
        // hsのi桁目が1なら残っている
        // 該当の桁だけ右シフトして1とのビット論理和をとる
        // 0101 >> 2で01になる。01 & 1で両方1になっている桁が取り出される
        if (hs >> i & 1) {
          // 1になっていたらisに残すと決めた行の情報が残る
          is.push_back(i);
        }
      }

      // 残っている列を抽出
      // やっていることは行と同じ
      for (int j = 0; j < w1; j++) {
        if (ws >> j & 1) {
          js.push_back(j);
        }
      }

      // このあと比較するときに配列外参照などを起こしたくないので
      // is(js)の大きさがh2(w2)ではなかったらcontinue
      if (is.size() != h2) continue;
      if (js.size() != w2) continue;

      // 残った部分を抽出して保存する配列c
      vector<vector<int>> c(h2, vector<int>(w2));

      // c[i][j]に配列aのis,jsで残った部分を添え字として代入
      for (int i = 0; i < h2; i++) {
        for (int j = 0; j < w2; j++) {
          c[i][j] = a[is[i]][js[j]];
        }
      }

      // bとcが一致しているかどうかを判定
      if (b == c) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}