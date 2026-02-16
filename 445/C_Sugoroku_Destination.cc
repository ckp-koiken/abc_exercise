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
  for (int i = 0; i < n; i++) a[i]--;

  vector<int> ans(n);
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == i) {
      ans[i] = i;
    } else {
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