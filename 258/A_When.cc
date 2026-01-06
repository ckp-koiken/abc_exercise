#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  cin >> K;

  int hour = K / 60;
  int min = K % 60;

  int h_now = 21;
  int min_now = 0;

  h_now += hour, min_now += min;

  cout << h_now << ":";

  if (min_now < 10) {
    cout << '0' << min_now << endl;
  } else {
    cout << min_now << endl;
  }

  return 0;
}
