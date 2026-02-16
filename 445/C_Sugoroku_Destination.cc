#include <bits/stdc++.h>
using namespace std;

// 作業を進めるといつかは終着点が決まり無限ループする
// 左（最初）から順番に求めるのではなく、右（終着点）から逆算して求めていく
// 終着点から動くことがないなら元からいたマスが答えになる
// 終着点から動くなら、動いた先から始めたときの終着点が答えになる
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  // 添え字のためにすべての要素から1引いておく
  for (int i = 0; i < n; i++) a[i]--;

  // 答えを格納する配列
  vector<int> ans(n);

  // 配列aを後ろから順番にみていく
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == i) {
      // a要素の数字と添え字（番号）が同じなら終着点での無限ループで動くことはない
      // 元からいたマスの番号が答え
      ans[i] = i;
    } else {
      // a要素の数字と添え字（番号）が異なるならひとつ前のマスから動いてきている
      // 一つたどった先で求めた番号が答え
      // 最後は無限ループするので右で求めた答えに行き着く
      ans[i] = ans[a[i]];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] + 1 << ' ';
  }

  cout << '\n';
  return 0;
}


/*
// 入力例は合うがTLEしてしまう
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];
  
  for (int i = 0; i < N; i++) {
    int num = A[i] - 1;
    for (int j = 0; j < 10e5; j++) {
      num = A[num] - 1;
    }
    cout << A[num] << ' ';
  }
  
  cout << '\n';
  return 0;
}
*/