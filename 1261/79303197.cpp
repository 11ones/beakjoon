// 2024년 6월 6일 14:18:48
// 맞았습니다!!
// 2684KB
// 848ms
#include <algorithm>
#include <iostream>
#include <vector>
#define MAX 100'000
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

int n, m;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void run(vvi &w, vvi &v, int y, int x) {
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx < 0 || tx >= m || ty < 0 || ty >= n) {
      continue;
    }
    if (v[ty][tx] == 0 && w[ty][tx] > w[y][x]) {
      w[ty][tx] = w[y][x];
      run(w, v, ty, tx);
      continue;
    }
    if(v[ty][tx] == 1 && w[ty][tx] > w[y][x] + 1) {
      w[ty][tx] = w[y][x] + 1;
      run(w, v, ty, tx);
    }
  }
}

int main() {

  cin >> m >> n;
  vvi v, w;
  for (int i = 0; i < n; i++) {
    vi iv(m);
    v.push_back(iv);
    w.push_back(iv);
  }
  char c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> c;
      v[i][j] = c - '0';
      w[i][j] = MAX;
    }
  }
  w[0][0] = 0;
  run(w, v, 0, 0);
  cout << w[n - 1][m - 1];
}