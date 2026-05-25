#include <bits/stdc++.h>
using namespace std;

char check_letter(char c) {
  if (c >= 'a' && c <= 'c') {
    return '2';
  } else if (c >= 'd' && c <= 'f') {
    return '3';
  } else if (c >= 'g' && c <= 'i') {
    return '4';
  } else if (c >= 'j' && c <= 'l') {
    return '5';
  } else if (c >= 'm' && c <= 'o') {
    return '6';
  } else if (c >= 'p' && c <= 's') {
    return '7';
  } else if (c >= 't' && c <= 'v') {
    return '8';
  } else {
    return '9';
  }
}

int main() {
  int N;
  cin >> N;

  string C = "";
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;

    char letter = check_letter(S[0]);
    C += letter;
  }

  cout << C << endl;
  return 0;
}