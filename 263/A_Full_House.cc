#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(13);
  for (int i = 0; i < 5; i++) {
    int tmp;
    cin >> tmp;
    data[tmp - 1]++;
  }

  for (int d : data) {
    if (d != 0) {
      if (d != 2 && d != 3) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}