#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  string S;
  for (int i = 0; i < K; i++) {
    // MEMO: char型の文字に直接iを足しても良い
    // S.push_back(i + 'A');
    S.push_back(i + 65);
  }

  cout << S << endl;
  return 0;
}