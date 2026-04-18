#include <bits/stdc++.h>
using namespace std;

// aはbよりも強いという形式で与えられる
// 推移率が成り立つのでx->yでy->zならx->z
// 人iが最強である（可能性がある）ということは
// ?->iという関係がないということである
// 自分より強い人がいないということならばその人が最強ということになる
// つまりbに現れない人が一人ならばその人が最強
// 逆にbに現れない人が複数人いるならば最強が一人に絞られない

int main() {
  int n, m;
  cin >> n >> m;

  // bで登場した人をカウントするためにsetを用意する
  set<int> st;
  for (int i = 1; i <= n; i++) st.insert(i);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    // bとして出てきた人をsetから削除していく
    st.erase(b);
  }

  // setに残った人が２人以上なら最強が定まらないので-1
  // 1人しかいないならその人が最強（setの最初・最小要素にアクセスして表示）
  if (st.size() >= 2) {
    cout << -1 << endl;
  } else {
    cout << *st.begin() << endl;
  }
  return 0;
}