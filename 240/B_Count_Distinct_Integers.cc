#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  set<int> se;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    se.insert(a);
  }

  cout << se.size() << endl;
  return 0;
}