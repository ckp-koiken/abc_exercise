#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y, N;
  cin >> X >> Y >> N;

  // 3個Y円のほうが1個X円3回よりも安い場合
  // できるだけ3個Y円で買って残りを1個X円で買う
  // 1個X円を3回の方が3個Y円より安い、あるいは同じ場合
  // N個全て1個X円で買う
  
  if (X * 3 > Y) {
    cout << (N / 3) * Y + (N % 3) * X << endl;
  } else {
    cout << X * N << endl;
  }

  return 0;
}