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