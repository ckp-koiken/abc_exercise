#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int n = (int)S.size();
  
  vector<int> check;
  
  for (int i = 0; i < n; i++) {
    int diff = (T[i] - S[i] + 26) % 26;
    check.push_back(diff);
  }
  
  int m = (int)check.size();
  for (int i = 0; i < m - 2; i++) {
    if (!(check[i] == check[i + 1] && check[i] == check[i + 2])) {
      cout << "No" << endl;
      return 0;
    }
  }
  
  cout << "Yes" << endl;
  return 0;
}