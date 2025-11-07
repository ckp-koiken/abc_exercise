#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  vector<bool> nya_pos(N);

  for (int i = 0; i < N - 1; i++) {
    if (S[i] == 'n' && S[i + 1] == 'a') {
      nya_pos[i] = true;
    }
  }

  string nya;

  for (int i = 0; i < N;) {
    if (nya_pos[i]) {
      nya += "nya";
      i += 2;
    } else {
      nya += S[i];
      i++;
    }
  }

  cout << nya << endl;
}

// 初期案
// 答えは合っていてACにもなるが範囲外参照をしている
// int main() {
//   int N;
//   string S;
//   cin >> N >> S;

//   for (int i = 0; i < N;) {
//     if (S[i] == 'n' && S[i + 1] == 'a') {
//       cout << "nya";
//       i += 2;
//     } else {
//       cout << S[i];
//       i++;
//     }
//   }

//   cout << '\n';
//   return 0;
// }