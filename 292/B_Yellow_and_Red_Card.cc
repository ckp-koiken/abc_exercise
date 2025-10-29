#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> cond(N + 1);

  for (int i = 0; i < Q; i++) {
    int num, player;
    cin >> num >> player;
    
    if (num == 1) {
      cond[player] += 1;
    }

    if (num == 2) {
      cond[player] += 2;
    }

    if (num == 3) {
      if (cond[player] >= 2) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  
  return 0;
}