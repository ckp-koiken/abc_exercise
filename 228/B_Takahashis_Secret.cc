#include <bits/stdc++.h>
using namespace std;

// 友達のリストAと秘密を知ったかどうかを管理するusedを用意
// 指示通りに処理してusedにフラグが立っていなければ秘密が伝わる
// 伝わった人数を数える
// フラグが立っていればその時点で終了
int main() {
  int n, x;
  cin >> n >> x;

  // 配列の添え字にしたいので1引く
  x--;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    // 添え字のための処理
    a[i]--;
  }

  // 秘密を知ったかどうかを管理する配列
  vector<int> used(n);

  // 知った人を数える
  int ans = 0;

  // usedにフラグが立っていないならループ
  while(!used[x]) {
    // usedのx番目にフラグを立てる
    used[x] = 1;

    // 友達リストのx番目を新しいxにする
    x = a[x];

    // そのたびに数える
    ans++;
  }

  cout << ans << endl;

  return 0;
}