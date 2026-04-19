// 2023년 12월 25일 21:10:27
// 맞았습니다!!
// 2020KB
// 9468ms
#include <iostream>
#include <vector>
using namespace std;

int n, ans = 0;
bool chess[15][15];
bool col[15];
int q = 0;

bool check(int x, int y) {
  bool check = 1;
  int tx, ty;
  if (x > y) {
    tx = x - y, ty = 0;
  } else {
    tx = 0, ty = y - x;
  }
  while (tx < n && ty < n) {
    if (chess[ty][tx] == 1)
      check = 0;
    tx++;
    ty++;
  }
  if (x + y >= n) {
    tx = n - 1, ty = x + y - n + 1;
  } else {
    tx = y + x, ty = 0;
  }
  while (tx >= 0 && ty < n) {
    if (chess[ty][tx] == 1)
      check = 0;
    tx--;
    ty++;
  }
  return check;
}

void find(int y) {
  for (int i = 0; i < n; i++) {
    if (check(i, y) && col[i] == 0) {
      q++;
      col[i] = 1;
      chess[y][i] = 1;
      if (q == n) {
        ans++;
      } else {
        if (y != n - 1)
          find(y + 1);
      }
      q--;
      col[i] = 0;
      chess[y][i] = 0;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  find(0);
  cout << ans;
}
