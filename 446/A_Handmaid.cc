#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  cout << "Of" << static_cast<char>(tolower(S[0]));
  
  for (int i = 1; i < (int)S.size(); i++) {
    cout << S[i];
  }
  
  cout << '\n';
  return 0;
}