#include <bits/stdc++.h>
using namespace std;

// 90度回転を最大0～3回行う（4回目の回転をやると元に戻る）
// 回転に加えて白黒を入れ替えた回数が操作の回数
// 操作の回数が最も少ない場合を探索する
int main() {
  int N;
  cin >> N;
  vector<string> S(N), T(N);
  for (int i = 0; i < N; i++) cin >> S[i];
  for (int i = 0; i < N; i++) cin >> T[i];

  // 答えの変数。大きな数を指定しておく。
  int ans = 1e9;

  // 回転のループを0～3回行う。
  // 白黒入れ替え計算 -> 回転という二つのパートに分けてfor文を書く
    // 例えば初回はri=0でnow=0から始まるが、
    // 入れ替え計算の後で1回転する -> その後のループでriが1回加算される
    // 次のループで1回回転した状態で白黒入れ替え計算が行われる
  for (int ri = 0; ri < 4; ri++) {
    // 白黒入れ替え計算パート
    // 現在の操作回数。初期値は回転の回数。
    int now = ri;

    // SとTで異なる部分の白黒をひっくり返す
    // ひっくり返した回数をnowに加える
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (S[i][j] != T[i][j]) now++;
      }
    }

    // ansはnowの最小値となる
    ans = min(ans, now);

    // 回転パート
    // Sをコピーしたnsを用意しておく(元のSに触らないため)
    vector<string> ns = S;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        // 90度回転するということは行と列を入れ替えるということ
        // 入れ替えた上で列は後ろから数えた数になる
        ns[j][N - 1 - i] = S[i][j];
      }
    }

    // 回転後Sを更新
    S = ns;
  }

  cout << ans << endl;
  return 0;
}