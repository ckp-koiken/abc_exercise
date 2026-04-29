#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int N = (int)S.size();

  if (S[N - 3] == 'i') {
    cout << "ist" << endl;
  } else {
    cout << "er" << endl;
  }
  
  return 0;
}