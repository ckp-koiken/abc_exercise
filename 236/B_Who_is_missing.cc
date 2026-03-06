#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  map<int, int> ma;
  for (int i = 0; i < (4 * N - 1); i++) {
    int a;
    cin >> a;
    ma[a]++;
  }

  for (auto m : ma) {
    if (m.second != 4) {
      cout << m.first << endl;
    }
  }
  return 0;
}