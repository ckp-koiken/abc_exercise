#include <bits/stdc++.h>
using namespace std;

// レ点がある場所（と先頭・末尾）で配列を区切る
// レ点がある区間で配列を逆順にすればよい
int main() {
  int n, m;
  cin >> n >> m;

  // レ点がある場所を特定する配列
  // aを読んで、その場所にレ点を記録
  vector<bool> re(n + 1);
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    re[a] = true;
  }

  // レ点がない場所を記録する配列
  // reを読んでレ点がない場所を区切りとする
  vector<int> b;
  for (int i = 0; i < n + 1; i++) {
    if (!re[i]) b.push_back(i);
  }

  // 1から順に答えを保存する配列
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i] = i + 1;
  }

  // レ点がない場所で区切って
  // レ点がない区間を逆順にする
  for (int i = 0; i <(int)b.size() - 1; i++) {
    // ans.begin()のイテレータにb[i]とb[i+1]を足した区間が逆順になる区間
    reverse(ans.begin() + b[i], ans.begin() + b[i + 1]);
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }

  cout << '\n';
  return 0;
}