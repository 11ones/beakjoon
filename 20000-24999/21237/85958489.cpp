// 2024년 11월 3일 00:01:59
// 맞았습니다!!
// 2068KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {-1, 0, 1, 0};
  map<char, int> m{{'N', 0}, {'E', 1}, {'S', 2}, {'W', 3}};
  while (n--) {
    string s;
    cin >> s;
    vector<int> v;
    for (auto e : s) {
      v.push_back(m[e]);
    }
    pair<int, int> p = {100, 100};
    array<array<int, 200>, 200> a{};
    a[100][100] = 1;
    for (auto e : v) {
      for (int i = 0; i < 2; i++) {
        p.first += dy[e];
        p.second += dx[e];
        a[p.first][p.second] = 1;
      }
    }
    a[99][99] = 2;
    queue<pair<int, int>> q;
    q.push({99, 99});
    while (!q.empty()) {
      auto t = q.front();
      q.pop();
      for (int i = 0; i < 4; i++) {
        int ty = t.first + dy[i];
        int tx = t.second + dx[i];
        if (ty < 0 || ty >= 200 || tx < 0 || ty >= 200) {
          continue;
        }
        if (!a[ty][tx]) {
          a[ty][tx] = 2;
          q.push({ty, tx});
        }
      }
    }
    int t = (v[0] + 1) % 4;
    int ty = 100 + dy[v[0]] + dy[t];
    int tx = 100 + dx[v[0]] + dx[t];
    if (!a[0][0] && a[ty][tx] || a[0][0] && !a[ty][tx]) {
      cout << "CW\n";
    } else {
      cout << "CCW\n";
    }
  }
}