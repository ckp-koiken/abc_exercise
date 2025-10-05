#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  
  for (int i = 0; i < N; i++) {
    cout << S.at(i) << S.at(i);
  }

  cout << endl;
  return 0;
}
