// 2024년 11월 2일 23:57:19
// 맞았습니다!!
// 2060KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {-1, 0, 1, 0};
  while (n--) {
    string s;
    cin >> s;
    vector<int> v;
    for (auto e : s) {
      switch (e) {
        case 'N':
          v.push_back(0);
          break;
        case 'E':
          v.push_back(1);
          break;
        case 'S':
          v.push_back(2);
          break;
        case 'W':
          v.push_back(3);
      }
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
        if(ty < 0 || ty >= 200 || tx < 0 || ty >= 200) {
          continue;
        }
        if (!a[ty][tx]) {
          a[ty][tx] = 2;
          q.push({ty, tx});
        }
      }
    }
    if (!a[0][0] && a[100 + + dy[v[0]] + dy[(v[0] + 1) % 4]][100 + + dx[v[0]] + dx[(v[0] + 1) % 4]] || a[0][0] && !a[100 + + dy[v[0]] + dy[(v[0] + 1) % 4]][100 + + dx[v[0]] + dx[(v[0] + 1) % 4]]) {
      cout << "CW\n";
    } else {
      cout << "CCW\n";
    }
  }
}