// 2024년 4월 23일 23:22:56
// 맞았습니다!!
// 2028KB
// 60ms
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<int, int, int> t;

int n, m;
vector<t> v;
int mn = 100;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<vector<int>> f = {{0}, {0, 2}, {0, 1}, {0, 1, 2}, {0, 1, 2, 3}};

void run(int d, vector<vector<int>> r) {
  if (d >= v.size()) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (!r[i][j]) {
          cnt++;
        }
      }
    }
    mn = min(mn, cnt);
    return;
  }
  vector<vector<int>> tr;
  for (int i = 0; i < n; i++) {
    vector<int> ttr(m);
    tr.push_back(ttr);
  }
  for (int i = 0; i < 4; i++) {
    tr = r;
    for (auto e : f[get<2>(v[d]) - 1]) {
      e = (e + i) % 4;
      int tx = get<1>(v[d]) + dx[e];
      int ty = get<0>(v[d]) + dy[e];
      while (1) {
        if (tx < 0 || tx >= m || ty < 0 || ty >= n || tr[ty][tx] == 6) {
          break;
        }
        if (tr[ty][tx] == 0) {
          tr[ty][tx] = '#';
        }
        tx += dx[e];
        ty += dy[e];
      }
    }
    run(d + 1, tr);
  }
}

int main() {
  cin >> n >> m;
  vector<vector<int>> r;
  for (int i = 0; i < n; i++) {
    vector<int> ttr(m);
    r.push_back(ttr);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> r[i][j];
      if (r[i][j] > 0 && r[i][j] < 6) {
        v.push_back({i, j, r[i][j]});
      }
    }
  }
  run(0, r);
  cout << mn;
}