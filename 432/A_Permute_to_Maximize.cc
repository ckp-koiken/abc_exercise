#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> num = {A, B, C};

  int ans = 0;
  sort(num.begin(), num.end());

  do {
    int tmp = 0;
    int res = 100;
    for (int i = 0; i < 3; i++) {
      tmp += res * num[i];
      res /= 10; 
    }
    ans = max(ans, tmp);
  } while (next_permutation(num.begin(), num.end()));

  cout << ans << endl;
  return 0;
}