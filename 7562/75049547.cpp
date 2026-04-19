// 2024년 3월 15일 23:20:14
// 맞았습니다!!
// 2416KB
// 48ms
#include <iostream>
#include <queue>
using namespace std;
typedef pair<int, int> p;

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int l, ay, ax, by, bx;
    cin >> l >> ay >> ax >> by >> bx;
    int **brd = new int *[l];
    for (int i = 0; i < l; i++) {
      brd[i] = new int[l]{};
    }
    if (!(ax == bx && ay == by)) {
      queue<p> q;
      q.push({ay, ax});
      while (!q.empty()) {
        int fy = q.front().first;
        int fx = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
          int tx = fx + dx[i];
          int ty = fy + dy[i];
          if (tx >= l || tx < 0 || ty >= l || ty < 0 || brd[ty][tx] != 0) {
            continue;
          }
          brd[ty][tx] = brd[fy][fx] + 1;
          q.push({ty, tx});
        }
      }
    }
    cout << brd[by][bx] << '\n';

    for (int i = 0; i < l; i++) {
      delete[] brd[i];
    }
    delete[] brd;
  }
}