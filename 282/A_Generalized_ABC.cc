#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  string S;
  for (int i = 0; i < K; i++) {
    S.push_back(i + 65);
  }

  cout << S << endl;
  return 0;
}