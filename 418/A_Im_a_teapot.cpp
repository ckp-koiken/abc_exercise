#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  int m = S.size();
  if (m < 3) {
    cout << "No" << endl;
    return 0;
  }
  
  string sub = S.substr(m - 3, 3);

  if (sub == "tea") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}