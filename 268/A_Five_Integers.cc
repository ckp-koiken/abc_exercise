#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> se;
  for (int i = 0; i < 5; i++) {
    int tmp;
    cin >> tmp;
    se.insert(tmp);
  }

  cout << se.size() << endl;
  return 0;
}