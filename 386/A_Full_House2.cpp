#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(4);
  for (int i = 0; i < 4; i++) {
    cin >> a.at(i);
  }
  
  sort(a.begin(), a.end());

  if (a.at(0) == a.at(1) && a.at(1) == a.at(2) && a.at(2) != a.at(3)) {
    cout << "Yes" << endl;
  } else if (a.at(0) != a.at(1) && a.at(1) == a.at(2) && a.at(2) == a.at(3)) {
    cout << "Yes" << endl;
  } else if (a.at(0) == a.at(1) && a.at(1) != a.at(2) && a.at(2) == a.at(3)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}