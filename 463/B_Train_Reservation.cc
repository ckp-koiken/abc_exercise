#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  char X;
  cin >> N >> X;
  int row = (int)(X - 'A');
  
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S; 
    if (S[row] == 'o') {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}