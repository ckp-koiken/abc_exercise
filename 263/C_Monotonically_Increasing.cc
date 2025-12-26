#include <bits/stdc++.h>
using namespace std;

// 0がn個、1がm-n個の順番で並べられたvectorを用意
// next_permutationで0である要素のindexを出力する
int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a;
  // 要素の数だけ0を入れる
  for (int i = 0; i < n; i++) a.push_back(0);

  // 最大値mと要素数nの差だけ1を入れる
  for (int i = 0; i < m - n; i++) a.push_back(1);

  // next_permutationで順列（辞書順）を回す
  // 0である要素のindex（添字+1）を出力
  // 最大値mのうち表示するのはn個だけなので
  // 表示できないm-n個を1で潰す
  do {
    for (int i = 0; i < m; i++) {
      if (a[i] == 0) cout << i + 1 << " ";
    }
    cout << '\n';
  } while (next_permutation(a.begin(), a.end()));

  return 0;
}