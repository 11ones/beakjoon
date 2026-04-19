// 2023년 12월 27일 00:23:19
// 맞았습니다!!
// 2020KB
// 148ms
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int rec[8][8];
int trec[8][8];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int n, m;
int mx = 0;

void find(int x, int y) {
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx < 0 || tx >= m || ty < 0 || ty >= n || trec[ty][tx] != 0) {
      continue;
    }
    trec[ty][tx] = 2;
    find(tx, ty);
  }
}

void end() {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (trec[i][j] == 0)
        sum++;
    }
  }

  if (sum > mx) {
    mx = sum;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      trec[i][j] = rec[i][j];
    }
  }
}

void wall(int t, int x, int y) {
  if (t >= 3) {
    for (int i = 0; i < v.size(); i += 2) {
      find(v[i], v[i + 1]);
    }
    end();
  } else {
    for (int i = y; i < n; i++) {
      if (i == y) {
        for (int j = x; j < m; j++) {
          if (rec[i][j] == 0) {
            rec[i][j] = 1;
            if (i != n && j != m)
              wall(t + 1, (x + 1) % m, y + (x + 1) / m);
            rec[i][j] = 0;
          }
        }
      } else {
        for (int j = 0; j < m; j++) {
          if (rec[i][j] == 0) {
            rec[i][j] = 1;
            if (i != n && j != m)
              wall(t + 1, (x + 1) % m, y + (x + 1) / m);
            rec[i][j] = 0;
          }
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> rec[i][j];
      trec[i][j] = rec[i][j];
      if (rec[i][j] == 2) {
        v.push_back(j);
        v.push_back(i);
      }
    }
  }
  wall(0, 0, 0);
  cout << mx;
}