// 2025년 10월 5일 15:58:24
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int l = s.length();
  vector<vector<int>> v(l, vector<int>(l + 1, 1));
  for (int i = 3; i <= l; ++i) {
    for (int j = 0; j <= l - i; ++j) {
      int c = 1, k = 1;
      for (; k <= i / 2; ++k) {
        if(!(i % 2) && k == i / 2) continue;
        if (s.substr(j, k) == s.substr(j + k, k)) c += v[j][k] * v[j + k][i - k];
        if (s.substr(j, k) == s.substr(j + i - k, k)) c += v[j][k] * v[j + k][i - k];
      }
      for (; k < i; ++k) {
        if (s.substr(j + k, i - k) == s.substr(j - i + k * 2, i - k)) c += v[j + k][i - k] * v[j][k];
        if (s.substr(j + k, i - k) == s.substr(j, i - k)) c += v[j + k][i - k] * v[j][k];
      }
      v[j][i] = c % 2014;
    }
  }
  cout << (v[0][l] + 2013) % 2014;
}