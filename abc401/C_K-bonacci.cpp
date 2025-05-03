#include <bits/stdc++.h>
using namespace std;

// 毎回A_iを求めるとTLEする
// A_i-K ~ A_i-1までの和を求める...数列S
// 数列Sは適宜更新
// S_iからS_i-Kを引いたものがA_i
// S_i+1はS_iにA_iを足したもの

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> a(max(K, N + 1)); // KがNを上回るときのため
  vector<int> s(a.size() + 1);  // SはAのサイズ+1

  for (int i = 0; i < K; i++) {
    a.at(i) = 1;
  }

  for (int i = 0; i < K; i++) {
    s.at(i + 1) = s.at(i) + a.at(i);
  }

  const int mod = 1e9;  // 10^9
  for (int i = K; i <= N; i++) {
    // 大きな値になるので、毎回項の余りを求める
    // c++は負の数を割った余りを負の数で表示するので、modを足して正の数に調整する
    a.at(i) = (s.at(i) - s.at(i - K) + mod) % mod;
    s.at(i + 1) = (s.at(i) + a.at(i)) % mod;
  }

  cout << a.at(N) << endl;

  return 0;
}