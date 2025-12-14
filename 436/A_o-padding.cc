#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int m = (int)S.size();

  int o_num = N - m;

  for (int i = 0; i < o_num; i++) {
    cout << 'o';
  }
  cout << S << endl;
  
  return 0;
}