#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int dis_s = abs(s.at(1) - s.at(0));
  int dis_t = abs(t.at(1) - t.at(0));

  if (dis_s == 3) dis_s = 2;
  if (dis_t == 3) dis_t = 2;
  if (dis_s == 4) dis_s = 1;
  if (dis_t == 4) dis_t = 1;


  if (dis_s == dis_t) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}