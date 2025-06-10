#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string n = to_string(N);
  char a = n.at(0), b = n.at(1), c = n.at(2);

  cout << b << c << a << " " << c << a << b << endl;
  return 0;
}