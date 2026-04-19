// 2025년 1월 25일 21:16:04
// 맞았습니다!!
// 2020KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int n;
double r = 0;
vector<int> d(4);
vector<vector<int>> m(31, vector<int>(31));
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void f(double p, int x, int y, int q) {
  if (q == n) {
    return;
  }
  double tp;
  int tx, ty;
  for (int i = 0; i < 4; i++) {
    if(!d[i]) continue;
    tp = p * ((double)d[i] / 100);
    tx = x + dx[i];
    ty = y + dy[i];
    if (m[ty][tx]) {
      r += tp;
      continue;
    }
    m[ty][tx] = 1;
    f(tp, tx, ty, q + 1);
    m[ty][tx] = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  m[15][15] = 1;
  cin >> n >> d[0] >> d[1] >> d[2] >> d[3];
  f(1, 15, 15, 0);
  cout << setprecision(15) << 1 - r;
}