// 2024년 5월 12일 16:21:20
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
typedef vector<vector<char>> vc;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int r, c;

void w(vc &v) {
  vc tv = v;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (v[i][j] != '*') {
        continue;
      }
      for (int k = 0; k < 4; k++) {
        int tx = j + dx[k];
        int ty = i + dy[k];
        if (tx < 0 || tx >= c || ty < 0 || ty >= r || v[ty][tx] != '.') {
          continue;
        }
        tv[ty][tx] = '*';
      }
    }
  }
  v = tv;
}

int main() {
  cin >> r >> c;
  vc v;
  queue<tuple<int, int, int>> q;
  pair<int, int> D;
  vector<pair<int, int>> vD;
  for (int i = 0; i < r; i++) {
    vector<char> tv(c);
    v.push_back(tv);
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> v[i][j];
      if (v[i][j] == 'S') {
        q.push({i, j, 0});
      }
      if (v[i][j] == 'D') {
        D = {i, j};
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    int tx = D.second + dx[i];
    int ty = D.first + dy[i];
    if (tx < 0 || tx >= c || ty < 0 || ty >= r || v[ty][tx] != '.') {
      continue;
    }
    vD.push_back({ty, tx});
  }
  if (vD.empty()) {
    cout << "KAKTUS";
    return 0;
  }
  int m = 0;
  while (!q.empty()) {
    w(v);
    vector<vector<bool>> vst;
    for (int i = 0; i < r; i++) {
      vector<bool> tv(c);
      vst.push_back(tv);
    }
    while (!q.empty() && get<2>(q.front()) == m) {
      for (int i = 0; i < 4; i++) {
        int tx = get<1>(q.front()) + dx[i];
        int ty = get<0>(q.front()) + dy[i];
        if (ty == D.first && tx == D.second) {
          cout << m + 1;
          return 0;
        }
        if (tx < 0 || tx >= c || ty < 0 || ty >= r || v[ty][tx] != '.' || vst[ty][tx]) {
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
        vst[ty][tx] = 1;
        q.push({ty, tx, m + 1});
      }
      q.pop();
    }
    m++;
  }
  cout << "KAKTUS";
}