#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  
  int64_t low = -1 * pow(2, 31);
  int64_t high = pow(2, 31);
  
  if (N >= low && N < high) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}