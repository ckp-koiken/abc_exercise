#include <bits/stdc++.h>
using namespace std;

// 問題文の条件をそのままシミュレーションすればよい
// 部屋の移動とボーナスの管理を同じ添え字ですると間違える
// 移動N-1と部屋番号xを別々に管理する

int main() {
  int N, M;
  // 持ち時間Tは最大値が大きいのでint64_tにしておく（オーバーフローする）
  int64_t T;
  cin >> N >> M >> T;

  // 持ち時間を管理する配列AをN-1個（部屋Nと部屋Nの間の数）用意
  vector<int> A(N - 1);
  for (int i = 0; i < N - 1; i++) {
    cin >> A[i];
  }

  // ボーナス部屋を管理する配列bonusをN+1個用意
  // 部屋番号と合わせるために1スタート、N+1個でボーナス自体はM個
  // 部屋xを添え字として、部屋xに到達したときにボーナスyを得る
  vector<int> bonus(N + 1);
  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    bonus[x] = y;
  }

  // 部屋の移動を再現するループ
  // 移動回数分N-1回ループする
  for (int i = 0; i < N - 1; i++) {
    // 移動ごとにA[i]だけ時間を消費
    T -= A[i];

    // もしTが0以下になったらnoを表示して終了
    if (T <= 0) {
      cout << "No" << endl;
      return 0;
    }

    // 移動の添え字と部屋番号の添え字は2つ分ずれている
    // bonus[x]の添え字xは部屋番号1スタート、移動後で+1
    // 移動可能な場合（T>0）移動先の部屋に対応したボーナスを得る
    T += bonus[i + 2];
  }

  cout << "Yes" << endl;

  return 0;
}