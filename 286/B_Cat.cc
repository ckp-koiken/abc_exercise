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

// another answer
// naを見つける
// nとaの間にyを挿入する（.insert()を使う）
// これらをnaが見つからなくなるまで繰り返す
// int main() {
//   int N;
//   string S;
//   cin >> N >> S;

//   while (true) {
//     // naを見つけたかどうかを判断
//     // 外側のwhileループで初期値が1
//     bool fin = 1;

//     // 'y'を挟んだら文字列の長さが変わるのでS.size()でループ
//     for (int i = 0; i < (int)S.size() - 1; i++) {
//       if (S.substr(i, 2) == "na") {
//         // naを見つけたら間に'y'をはさむ
//         S.insert(S.begin() + i + 1, 'y');
//         // 'y'を挟んだらfinを0にしてforループ終了
//         fin = 0;
//         break;
//       }
//     }

//     // finが1のままだったらnaが見つからなかったと判断して
//     // whileループ終了
//     if (fin) break;
//   }
//   cout << S << endl;
// }

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