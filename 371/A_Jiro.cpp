#include <bits/stdc++.h>
using namespace std;

int main() {
  string ab, ac, bc;
  cin >> ab >> ac >> bc;

  if (ab == "<") {
    if (ac == "<") {
      if (bc == "<") {
        cout << "B" << endl;
      } else {
        cout << "C" << endl;
      }
    } else { // a < b & a > c
      cout << "A" << endl;
    }
  } else { // a > b
    if (ac == "<") { // a > b & a < c
      cout << "A" << endl;
    } else { // a > b & a > c
      if (bc == "<") {
        cout << "C" << endl;
      } else {
        cout << "B" << endl;
      }
    }
  }
  return 0;
}

// another answer
// ab != acのとき　b > a > cか c > a > bなのでaが次男
// ab == acで、ab == bcのとき、a > b > cか c > b > aなのでbが次男
// そうでないときはcが次男
// if (ab != ac) {
//   cout << "A" << endl;
// } else if (ab == ac) {
//   cout << "B" << endl;
// } else {
//   cout << "C" << endl;
// }