// 2024년 6월 4일 23:07:04
// 맞았습니다!!
// 2076KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, tme = 1, cnt = 0;

void fill(vvi &v, vvi &out, int y, int x) {
  
  for(int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if(tx < 0 || tx >= m || ty < 0 || ty >= n || out[ty][tx] || v[ty][tx]) {
      continue;
    }
    out[ty][tx] = 1;
    fill(v, out, ty, tx);
  }
}

int main() {
  cin >> n >> m;
  vvi v;
  for (int i = 0; i < n; i++) {
    vi iv(m);
    v.push_back(iv);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
      if (v[i][j])
        cnt++;
    }
  }
  if(cnt == 0) {
    cout << "0\n0";
    return 0;
  }
  while (1) {
    vvi tv, out;
    for (int i = 0; i < n; i++) {
      vi iv(m);
      tv.push_back(iv);
      out.push_back(iv);
    }
    fill(v, out, 0, 0);
    tv = v;
    int tcnt = cnt;
    for (int i = 1; i < n - 1; i++) {
      for (int j = 1; j < m - 1; j++) {
        if (v[i][j]) {
          int zro = 0;
          for (int k = 0; k < 4; k++) {
            zro += out[i + dy[k]][j + dx[k]];
          }
          if (zro) {
            tv[i][j] = 0;
            tcnt--;
          }
        }
      }
    }
    v = tv;
    if (!tcnt) {
      cout << tme << "\n" << cnt;
      return 0;
    }
    cnt = tcnt;
    tme++;
  }
}