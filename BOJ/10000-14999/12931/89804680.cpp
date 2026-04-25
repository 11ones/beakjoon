// 2025년 2월 9일 13:07:13
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  array<array<int, 2>, 1001> d;
  for(auto &e : d) e = {999, 999};
  d[0] = {0, 0};
  queue<int> q;
  q.push(0);
  while(!q.empty()) {
    int x = q.front();
    q.pop();
    if(x + 1 <= 1000 && d[x + 1][0] > d[x][0] + 1) {
      d[x + 1] = {d[x][0] + 1, d[x][1]};
      q.push(x + 1);
    }
    if(x * 2 <= 1000 && d[x * 2][0] > d[x][0]) {
      d[x * 2] = {d[x][0], d[x][1] + 1};
      q.push(x * 2);
    }
  }

  int n, p = 0, m = 0, t;
  cin >> n;
  while(n--) {
    cin >> t;
    p += d[t][0];
    m = max(m, d[t][1]);
  }
  cout << p + m;
}