// 2024년 2월 23일 23:59:25
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

enum { hor, ver, dig };

int add[16][16][3] = {};
int hus[16][16] = {};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> hus[i][j];
    }
  }
  add[0][0][hor] = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j < n - 1 && hus[i][j] == 0 && hus[i][j + 1] == 0) {
        if (j > 0) {
          add[i][j][hor] += add[i][j - 1][hor];
        }
        if (i > 0 && j > 0) {
          add[i][j][hor] += add[i - 1][j - 1][dig];
        }
      }
      if (i < n - 1 && hus[i][j] == 0 && hus[i + 1][j] == 0) {
        if (i > 0) {
          add[i][j][ver] += add[i - 1][j][ver];
        }
        if (i > 0 && j > 0) {
          add[i][j][ver] += add[i - 1][j - 1][dig];
        }
      }
      if (j < n - 1 && i < n - 1 && hus[i][j] == 0 && hus[i][j + 1] == 0 &&
          hus[i + 1][j] == 0 && hus[i + 1][j + 1] == 0) {
        if (i > 0) {
          add[i][j][dig] += add[i - 1][j][ver];
        }
        if (j > 0) {
          add[i][j][dig] += add[i][j - 1][hor];
        }
        if (i > 0 && j > 0) {
          add[i][j][dig] += add[i - 1][j - 1][dig];
        }
      }
    }
  }
  n--;
  cout << add[n][n - 1][hor] + add[n - 1][n][ver] + add[n - 1][n - 1][dig];
}