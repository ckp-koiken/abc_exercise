#include <bits/stdc++.h>
using namespace std;

// 高橋くんが転入することで人数が1人増える
// 転入前のクラス人数の最大値をMとして、
// 転入したクラスの人数が高橋くんを含めてM人以上である必要がある
// つまり、転入前にM-1人以上いるクラスを数えれば良い
int main() {
  int N, K;
  cin >> N >> K;

  // Kクラス分の人数を数える
  vector<int> member_count(K);
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    // 添え字用にAを1減らしてクラスごとに人数を加えていく
    A--;
    member_count[A]++;
  }

  // 転入前の最大値をMとする
  int M = *max_element(member_count.begin(), member_count.end());

  // M - 1人以上いるクラスの数を求めればいい
  int ans = 0;
  for (int i = 0; i < K; i++) {
    if (member_count[i] >= M - 1) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}