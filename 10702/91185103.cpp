// 2025년 3월 11일 02:12:45
// 맞았습니다!!
// 2028KB
// 20ms
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> x = {{3, 5, 6}, {3, 4, 6}, {4, 5, 6}};

int foo(array<int, 3> v, vector<int> u) {
  if (v[0] + v[1] + v[2] == 0) return 1;
  bool t = 0;
  for (int i = 0; i < 3; ++i) {
    if (v[i] > 0) {
      for (int j = 0; j < 3; ++j) {
        if (u[x[i][j]]) {
          --v[i], --u[x[i][j]];
          t |= foo(v, u);
          ++v[i], ++u[x[i][j]];
        }
      }
    }
  }
  return t;
}

int main() {
  int n, m;
  string s;
  cin >> n;
  vector<array<int, 3>> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> s;
    auto f = s.begin(), b = s.begin();
    for (int j = 0; j < 3; ++j) {
      while (1) {
        ++b;
        if (*b == '-' || b == s.end()) break;
      }
      v[i][j] = stoi(s.substr(f - s.begin(), b - f));
      f = ++b;
    }
  }
  cin >> m;
  vector<int> u(7);
  while (m--) {
    cin >> s;
    if (s == "O")
      u[0]++;
    else if (s == "V")
      u[1]++;
    else if (s == "N")
      u[2]++;
    else if (s == "OV" || s == "VO")
      u[3]++;
    else if (s == "VN" || s == "NV")
      u[4]++;
    else if (s == "NO" || s == "ON")
      u[5]++;
    else
      u[6]++;
  }
  for (int o = 0; o < n; o++) {
    for (int i = 0; i < 3; i++) v[o][i] = max(0, v[o][i] - u[i]);
    cout << (foo(v[o], u) ? "DA\n" : "NE\n");
  }
}