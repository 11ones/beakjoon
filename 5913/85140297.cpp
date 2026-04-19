// 2024년 10월 13일 15:02:42
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

array<array<int, 5>, 5> a{};
int k, cnt = 0;

void find(int d, int y, int x) {
  if (d + k == 24 && y == 4 && x == 4) {
    cnt++;
  }
  for (int i = 0; i < 4; i++) {
    int tx = dx[i] + x;
    int ty = dy[i] + y;
    if (tx < 0 || tx > 4 || ty < 0 || ty > 4 || a[ty][tx] != 0) continue;
    a[ty][tx] = 1;
    find(d + 1, ty, tx);
    a[ty][tx] = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> k;
  for (int i = 0; i < k; i++) {
    int r, c;
    cin >> r >> c;
    a[r - 1][c - 1] = -1;
  }

  if (k % 2) {
    cout << 0;
  } else {
    a[0][0] = 1;
    find(0, 0, 0);
    cout << cnt;
  }
}