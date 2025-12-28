#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> s;
  
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    s.push_back(a);

    if (s.size() >= 4) {
      bool ok = true;
      for (int j = 0; j < 3; j++) {
        if (s[s.size() - 2 - j] != s.back()) {
          ok = false;
        }
      }

      if (ok) {
        for (int j = 0; j < 4; j++) {
          s.pop_back();
        }
      }
    }
  }

  cout << s.size() << endl;
  return 0;
}