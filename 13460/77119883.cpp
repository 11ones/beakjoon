// 2024년 4월 17일 23:27:43
// 맞았습니다!!
// 2020KB
// 4ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> p;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char arr[10][10];
int n, m;
int mn = 11;
p O;

void f(int x, int d, p R, p B) {
  if (d >= 10) {
    return;
  }
  for (int i = 0; i < 4; i++) {
    if (i == x) {
      continue;
    }
    int tmn = 11;
    arr[R.first][R.second] = 'R';
    arr[B.first][B.second] = 'B';
    p tR = R, tB = B;
    bool chk = 0;
    while (arr[tB.first][tB.second] != '#' && tB != tR) {
      tB.first += dy[i];
      tB.second += dx[i];
      if (tB == O) {
        chk = 1;
        break;
      }
    }
    if (chk) {
      continue;
    }
    tB.first -= dy[i];
    tB.second -= dx[i];
    while (arr[tR.first][tR.second] != '#' && tB != tR) {
      tR.first += dy[i];
      tR.second += dx[i];
      if (tR == O) {
        tmn = d;
        chk = 1;
        tR = {0, 0};
      }
    }
    tR.first -= dy[i];
    tR.second -= dx[i];
    while (arr[tB.first][tB.second] != '#' && tB != tR) {
      tB.first += dy[i];
      tB.second += dx[i];
      if (tB == O) {
        tmn = 11;
        chk = 1;
        break;
      }
    }
    if (chk) {
      mn = min(mn, tmn);
      continue;
    }
    tB.first -= dy[i];
    tB.second -= dx[i];
    if (R != tR) {
      arr[R.first][R.second] = '.';
    }
    if (B != tB) {
      arr[B.first][B.second] = '.';
    }
    f(i, d + 1, tR, tB);
  }
}

int main() {
  cin >> n >> m;
  p R, B;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 'R') {
        R = {i, j};
      }
      if (arr[i][j] == 'B') {
        B = {i, j};
      }
      if (arr[i][j] == 'O') {
        O = {i, j};
      }
    }
  }
  f(-1, 0, R, B);
  cout << ((mn == 11) ? -1 : mn + 1);
}