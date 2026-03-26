#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N >= 42) N++;
  
  if (N >= 10) {
    cout << "AGC0" << N << endl;
  } else {
    cout << "AGC00" << N << endl;
  }

  // another answer
  // 3桁で表示して穴埋めにはsetwとsetfillを使う
  // cのprintfでも似たような桁埋めができる
  // cout << "AGC" << setfill('0') << setw(3) << N << endl;
  return 0;
}