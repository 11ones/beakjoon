// 2025년 2월 24일 23:36:06
// 맞았습니다!!
// 8756KB
// 76ms
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> V;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int h, w, a = 0, c = 0;
  cin >> h >> w;
  vector<V> v(h, V(w));
  auto u = v;
  vector<array<int, 3>> t;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> v[i][j];
      if (v[i][j] > 1) {
        t.push_back({v[i][j], i, j});
      } else {
        a++;
        u[i][j] = 1;
      }
    }
  }
  sort(t.begin(), t.end(), greater<>());
  for (auto e : t) {
    if (u[e[1]][e[2]]) continue;
    c++;
    queue<array<int, 3>> q;
    q.push(e);
    while(!q.empty()) {
      auto qt = q.front();
      q.pop();
      for(int i = 0; i < 4; i++) {
        int ty = qt[1] + dy[i];
        int tx = qt[2] + dx[i];
        if(tx < 0 || tx >= w || ty < 0 || ty >= h || u[ty][tx] || v[ty][tx] > qt[0]) continue;
        u[ty][tx] = 1;
        q.push({v[ty][tx], ty, tx});
      }
    }
  }
  cout << c;
}