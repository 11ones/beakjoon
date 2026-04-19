// 2024년 2월 27일 23:27:21
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int r, c;
int mx = 0;
char arr[20][20]{};
bool vst[26]{};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

void f(int x, int y, int d) {
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx < 0 || tx >= c || ty < 0 || ty >= r) {
      continue;
    }
    int t = arr[ty][tx] - 'A';
    if (!vst[t]) {
      vst[t] = 1;
      f(tx, ty, d + 1);
      vst[t] = 0;
    } else {
      if (mx < d) {
        mx = d;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> r >> c;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
    }
  }
  vst[arr[0][0] - 'A'] = 1;
  f(0, 0, 1);
  cout << mx;
}