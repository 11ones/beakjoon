// 2023년 12월 25일 20:21:20
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int n, ans = 0;
int chess[15][15];
int q = 0;

void attack(int x, int y, int add) {
  int tx = x, ty = y;
  while (tx >= 0 && ty >= 0) {
    tx--;
    ty--;
  }
  tx++;
  ty++;
  while (tx < n && ty < n) {
    chess[ty][tx] += add;
    tx++;
    ty++;
  }
  tx = x;
  ty = y;
  while (tx < n && ty >= 0) {
    tx++;
    ty--;
  }
  tx--;
  ty++;
  while (tx >= 0 && ty < n) {
    chess[ty][tx] += add;
    tx--;
    ty++;
  }
  for (int i = 0; i < n; i++) {
    chess[i][x] += add;
    chess[y][i] += add;
  }
  chess[y][x] -= add * 3;
}

bool full() {
  bool check = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (chess[i][j] == 0)
        check = 0;
    }
  }
  return check;
}

void find(int x, int y) {
  for (int i = y; i < n; i++) {
    if (i == y) {
      for (int j = x; j < n; j++) {
        if (chess[i][j] == 0) { 
          q++;
          attack(j, i, 1);
          if (full()) {
            if (q == n) {
              ans++;
            }
          } else {
            if (j == n - 1 && i == n - 1) {
            } else if (j == n - 1)
              find(0, i + 1);
            else
              find(j + 1, i);
          }
          q--;
          attack(j, i, -1);
        }
      }
    } else {
      for (int j = 0; j < n; j++) {
        if (chess[i][j] == 0) {
          q++;
          attack(j, i, 1);
          if (full()) {  
            if (q == n) {
              ans++;
            }
          } else {
            if (j == n - 1 && i == n - 1) {
            } else if (j == n - 1)
              find(0, i + 1);
            else
              find(j + 1, i);
          }
          q--;
          attack(j, i, -1);
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  find(0, 0);
  cout << ans;
}