// 2024년 5월 12일 16:05:59
// 메모리 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
typedef vector<vector<char>> vc;
typedef tuple<int, int, int> t;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int r, c;

void w(vc &a, vc &b) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] != '*') {
        continue;
      }
      for (int k = 0; k < 4; k++) {
        int tx = j + dx[k];
        int ty = i + dy[k];
        if (tx < 0 || tx >= c || ty < 0 || ty >= r || a[ty][tx] != '.') {
          continue;
        }
        b[ty][tx] = '*';
      }
    }
  }
  a = b;
}

int main() {
  cin >> r >> c;
  vc rv, v, tv;
  queue<t> q;
  pair<int, int> D;
  vector<pair<int, int>> vD;
  for (int i = 0; i < r; i++) {
    vector<char> ttv(c);
    rv.push_back(ttv);
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> rv[i][j];
      if (rv[i][j] == 'S') {
        q.push({i, j, 0});
      }
      if (rv[i][j] == 'D') {
        D = {i, j};
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    int tx = D.second + dx[i];
    int ty = D.first + dy[i];
    if (tx < 0 || tx >= c || ty < 0 || ty >= r || rv[ty][tx] != '.') {
      continue;
    }
    vD.push_back({ty, tx});
  }
  if (vD.empty()) {
    cout << "KAKTUS";
    return 0;
  }
  v = tv = rv;
  int m = 0;
  while (!q.empty()) {
    w(v, rv);
    while (get<2>(q.front()) == m) {
      for (int i = 0; i < 4; i++) {
        int tx = get<1>(q.front()) + dx[i];
        int ty = get<0>(q.front()) + dy[i];
        if (ty == D.first && tx == D.second) {
          cout << m + 1;
          return 0;
        }
        if (tx < 0 || tx >= c || ty < 0 || ty >= r || v[ty][tx] != '.') {
          continue;
        }
        int cnt = 0;
        for (auto e : vD) {
          if (v[e.first][e.second] == '.' || v[e.first][e.second] == 'S') {
            cnt++;
          }
        }
        if (!cnt) {
          continue;
        }
        q.push({ty, tx, m + 1});
      }
      q.pop();
    }
    m++;
  }
  cout << "KAKTUS";
}