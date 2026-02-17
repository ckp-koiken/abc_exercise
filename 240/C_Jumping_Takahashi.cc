#include <bits/stdc++.h>
using namespace std;

// ジャンプの選択肢が2通りあるが選択肢を全て列挙して
// Xに到達するかどうかを確認すると計算量が多くなりTLEとなる
// 「メモ化再帰」アルゴリズムを用いる
// 再帰関数f(i, x)を組む…i回ジャンプしてxにいる状態からクリアできるか
// ジャンプの回数、選択肢に応じてクリアできるかどうかをメモ、記憶しておく
// ジャンプの試行のたびにメモを参照してクリアできるかどうかを確認すれば
// 計算の回数が少なくて済む

// mapの宣言が長くなるのでiとxのpairをPとして用意
using P = pair<int, int>;

// グローバル変数として読む
int n, X;
vector<int> a, b;

// メモ化のためのmapを用意
// i,xのpairとその結果のbool値を記憶
map<P, bool> memo;

// i回ジャンプしてxの位置からクリアできるかどうかを返す関数f
bool f(int i, int x) {
  // ジャンプ回数iが要求される回数n回ならばxが終着点のXと同じかどうかを返す
  // 再帰関数の終着点
  if (i == n) return x == X;

  // iとxをpairで記録(arg)
  P arg(i, x);

  // memoの記録にargのpairがあればその結果を返す
  if (memo.count(arg)) return memo[arg];

  // 1回ジャンプの回数が増えてa[i]かb[i]だけ移動する
  // どちらかでクリアできるならばtrueとする
  bool res = false;
  if (f(i + 1, x + a[i]) || f(i + 1, x + b[i])) res = true;

  // memo[arg]に結果resを記憶してから返す
  return memo[arg] = res;
}

int main() {
  cin >> n >> X;
  a = vector<int>(n);
  b = vector<int>(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  // 0,0の状態からクリアできるかどうかでYes/Noを表示
  if (f(0, 0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

/*
// another answer
// dpで解く方法もある
// ジャンプして行ける箇所からなら、その次にジャンプして移動する場所も行ける
// 漸化式みたいに行ける箇所を埋めていく方法
// 総当たりしなくて良いので計算量が少なくて済む
int main() {
  int n, X;
  cin >> n >> X;

  vector<int> a, b;
  a = vector<int>(n);
  b = vector<int>(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  // ジャンプの回数とXの地点にいるかどうかを管理する配列dpを用意する
  // nは0~nまでなのでn+1
  // X地点は0~XなのでX+1だが、dpによって配列外参照する可能性があるので余分に確保する
  // X+a[i]かX+b[i]でXを超えてしまうかも
  vector<vector<bool>> dp(n + 1, vector<bool>(X + 101, false));

  // 初期位置0,0はtrue
  dp[0][0] = true;

  // trueの箇所から1回ジャンプしてaかbだけ移動したところもtrueである
  // 配列dpのtrueの場所から端を発してジャンプの回数と移動したところをtrueで埋めていく
  for (int i = 0; i < n; i++) {
    for (int x = 0; x < X + 1; x++) {
      if (dp[i][x]) {
        dp[i + 1][x + a[i]] = true;
        dp[i + 1][x + b[i]] = true;
      }
    }
  }

  // dp配列をn回ジャンプしてXに到達できるかを確認
  if (dp[n][X]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;

}
*/