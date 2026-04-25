// 2024년 4월 20일 12:43:11
// 맞았습니다!!
// 2028KB
// 16ms
#include <iostream>
#include <vector>
using namespace std;

int n;
int mx = 0;

void f(int d, vector<vector<int>> v) {
  if (d >= 5) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        mx = max(mx, v[i][j]);
      }
    }
    return;
  }

  vector<vector<int>> tv;
  vector<vector<bool>> vst;
  for (int i = 0; i < n; i++) {
    vector<int> tt(n);
    tv.push_back(tt);
    vector<bool> tvst(n);
    vst.push_back(tvst);
  }
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {-1, 0, 1, 0};
  int sx[4] = {0, n - 1, n - 1, 0};
  int sy[4] = {0, 0, n - 1, n - 1};
  int dj[4] = {1, -1, -1, 1};
  int di[4] = {1, 1, -1, -1};

  for (int o = 0; o < 4; o++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        tv[i][j] = 0;
        vst[i][j] = 0;
      }
    }
    tv = v;
    for (int i = sy[o]; i < n && i >= 0; i += di[o]) {
      for (int j = sx[o]; j < n && j >= 0; j += dj[o]) {
        if (!tv[i][j]) {
          continue;
        }
        int ti = i;
        int tj = j;
        while (1) {
          ti += dy[o];
          tj += dx[o];
          if (ti < 0 || ti >= n || tj < 0 || tj >= n || vst[ti][tj]) {
            ti -= dy[o];
            tj -= dx[o];
            break;
          }
          if (tv[ti][tj]) {
            break;
          }
        }
        if (ti == i && tj == j) {
          continue;
        }
        if (tv[ti][tj] == tv[i][j]) {
          vst[ti][tj] = 1;
          tv[i][j] *= 2;
        } else if (tv[ti][tj] != 0 && tv[ti][tj] != tv[i][j]) {
          vst[ti][tj] = 1;
          ti -= dy[o];
          tj -= dx[o];
        }
        tv[ti][tj] = tv[i][j];
        if (ti != i || tj != j) {
          tv[i][j] = 0;
        }
      }
    }
    f(d + 1, tv);
  }
}

int main() {
  cin >> n;
  vector<vector<int>> v;
  for (int i = 0; i < n; i++) {
    vector<int> t(n);
    for (int j = 0; j < n; j++) {
      cin >> t[j];
    }
    v.push_back(t);
  }
  f(0, v);
  cout << mx;
}