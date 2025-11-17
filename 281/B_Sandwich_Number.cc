#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  int len = (int)S.size();  
  if (len != 8) {
    cout << "No" << endl;
    return 0;
  }

  char first, last;
  string mid;

  first = *S.begin();
  last = *(S.end() - 1);
  
  mid = S.substr(1, 6);
  int mid_n = stoi(mid);
  
  if (!(first >= 65 && first <= 90)) {
    cout << "No" << endl;
    return 0;
  }

  if (!(last >= 65 && last <= 90)) {
    cout << "No" << endl;
    return 0;
  }

  if (!(mid_n >= 100000 && mid_n <= 999999)) {
    cout << "No" << endl;
    return 0;
  }  

  cout << "Yes" << endl;

  return 0;
}