#include <bits/stdc++.h>
using namespace std;

// 右シフト1を1回行うことは左シフトをN-1回行うのと同じなので左だけ考えればいい
// N回左シフトすると元に戻るため左シフトを0以上N-1回であるとしてよい
// 左シフトをN-1回まで行って辞書順最小・最大のものを求めればよい
int main() {
  string S;
  cin >> S;

  int n = (int)S.size();
  // 空の文字列ベクトルを用意
  vector<string> v(n);

  // n回ループして左シフトしたものをvに追加していく
  // 左シフト0回も考慮するのでn回ループで良い
  for (int i = 0; i < n; i++) {
    // i文字目からn-i文字目まで抽出して先頭へ
    // 0文字目からi文字目までを後ろにつける
    v[i] = S.substr(i, n - i) + S.substr(0, i);
  }

  // 辞書順最小値と最大値を求める
  // 文字列ベクトルなので最小値と最大値を求めると辞書順で返ってくる
  cout << *min_element(v.begin(), v.end()) << endl;;
  cout << *max_element(v.begin(), v.end()) << endl;;

  return 0;
}