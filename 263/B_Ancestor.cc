#include <bits/stdc++.h>
using namespace std;

// 子Nから親へのリンクをたどっていく
// 1になるまでリンクをたどって、たどった回数を答えればいい
int main() {
  int n;
  cin >> n;

  // 親を記録するn要素の配列p
  vector<int> p(n);

  // 親を入力。このときiを1始まりにしてn-1まで記録。
  // 子iの親p[i]を表現するため。
  // 子iは1始まりなので、添え字の関係から親p[i]を1ずつ引く
  for (int i = 1; i < n; i++) {
    cin >> p[i];
    p[i]--;
  }

  // 今見ている子をkとする。最初は最後尾なのでn-1。
  int k = n - 1;
  int ans = 0;

  // kが0になるまで親の配列を参照しリンクをたどる
  while (k != 0) {
    k = p[k];
    ans++;
  }

  cout << ans << endl;
  return 0;
}