// 2024년 6월 21일 22:39:15
// 맞았습니다!!
// 14544KB
// 128ms
#include <iostream>
#include <vector>
using namespace std;

int n, m, r = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<vector<int>> v;

void find(int y, int x) {
  for(int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if(tx < 0 || tx >= m || ty < 0 || ty >= n || !v[ty][tx]) {
      continue;
    }
    v[ty][tx] = 0;
    find(ty, tx);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    vector<int> tv(m);
    v.push_back(tv);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int a, b, c;
      cin >> a >> b >> c;
      v[i][j] = (a + b + c) / 3;
    }
  }
  int t;
  cin >> t;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      v[i][j] = (t <= v[i][j]) ? 1 : 0;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(v[i][j]) {
        v[i][j] = 0;
        find(i, j);
        r++;
      }
    }
  }
  cout << r;
}