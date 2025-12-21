#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  vector<vector<int>> A(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }

  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }

  vector<int> ans;
  for (int i = 0; i < H; i++) {
    int cnt = 0;

    for (int j = 0; j < W; j++) {
      for (int k = 0; k < N; k++) {
        if (B[k] == A[i][j]) {
          cnt++;
        }
      }
    }
    
    ans.push_back(cnt);
  }

  cout << *max_element(ans.begin(), ans.end()) << endl;
  return 0;
}