// 2024년 7월 13일 14:30:26
// 맞았습니다!!
// 2284KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int n, r;
    cin >> n >> r;
    int **a = new int *[n], **v = new int *[n];
    for (int i = 0; i < n; i++) {
      a[i] = new int[n]{};
    }
    for (int i = 0; i < n; i++) {
      v[i] = new int[n]{};
    }
    int x, y, d;
    for (int i = 0; i < r; i++) {
      cin >> x >> y;
      a[x - 1][y - 1] = 1;
    }
    cin >> x >> y;
    x--;
    y--;
    if (y == -1) {
      d = 0;
    }
    if (x == -1) {
      d = 1;
    }
    if (y == n) {
      d = 2;
    }
    if (x == n) {
      d = 3;
    }
    bool chk = 0;
    while (1) {
      x += dx[d];
      y += dy[d];
      if (x < 0 || x >= n || y < 0 || y >= n) {
        chk = 1;
        break;
      }
      if (a[x][y]) {
        d = (d + 1) % 4;
      }
      if (v[x][y] == d + 1) {
        break;
      }
      v[x][y] = d + 1;
    }
    if (chk) {
      cout << x + 1 << " " << y + 1 << '\n';
    } else {
      cout << "0 0\n";
    }
  }
}