#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> data = {
    {1, 2, 3}, 
    {4, 5, 6}, 
    {7, 8, 9}
  };

  int A, B;
  cin >> A >> B;

  int group_A = 0;
  int group_B = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (data.at(i).at(j) == A) group_A = i;
      if (data.at(i).at(j) == B) group_B = i;
    }
  }

  if (abs(A - B) == 1 && group_A == group_B) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
