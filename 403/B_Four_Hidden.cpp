#include <bits/stdc++.h>
using namespace std;

int main() {
  string T, U;
  cin >> T >> U;
  vector<int> indices;  // ?の場所を記憶する配列
  for (int i = 0; i < T.size(); i++) {
    if (T.at(i) == '?') {
      indices.push_back(i); // ?の場所
    }
  }

  vector<char> alphabets(26); // アルファベット26文字を保持する配列
  for (int i = 0; i < 26; i++) {
    alphabets.at(i) = 'a' + i;
  }

  // ?は4つなので4つをそれぞれ全探索
  for (char a : alphabets) {
    for (char b : alphabets) {
      for (char c : alphabets) {
        for (char d : alphabets) {
          string S = T;
          S.at(indices.at(0)) = a;
          S.at(indices.at(1)) = b;
          S.at(indices.at(2)) = c;
          S.at(indices.at(3)) = d;
          // string::find関数で連続部分文字列があるかどうかを判定
          // string::nposはstring::findで値が見つからなかった場合に返す値
          if (S.find(U) != string::npos) { 
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}