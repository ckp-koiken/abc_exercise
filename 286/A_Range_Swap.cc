#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, P, Q, R, S;
  cin >> N >> P >> Q >> R >> S;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> PQ;
  vector<int> RS;

  for (int i = P - 1; i < Q; i++) {
    PQ.push_back(A[i]);
  }

  for (int i = R - 1; i < S; i++) {
    RS.push_back(A[i]);
  }

  for (int i = 0; i < N;) {
    if (i >= (P - 1) && i < Q) {
      for (int rs : RS) {
        cout << rs << " ";
      }

      i += (int)RS.size();
    } else if (i >= (R - 1) && i < S) {
      for (int pq : PQ) {
        cout << pq << " ";
      }

      i += (int)PQ.size();
    } else {
      cout << A[i] << " ";
      i++;
    }
  }

  cout << '\n';

  return 0;
}

// another answer
// p~qまでの区間とr~sまでの区間をそのまま取り換えることを考える
// int main() {
//   int n, p, q, r, s;
//   cin >> n >> p >> q >> r >> s;
//   vector<int> a(n);
//   for (int i = 0; i < n; i++) cin >> a[i];

//   // 添え字対策
//   p--; q--; r--; s--;

//   for (int i = p; i <= q; i++) {
//     // 取り換え先はrにiがpから離れた距離を足せばよい
//     int j = (i - p) + r;
//     swap(a[i], a[j]);
//   }

//   for (int aa : a) cout << aa << " ";
//   cout << '\n';

//   return 0;
// }