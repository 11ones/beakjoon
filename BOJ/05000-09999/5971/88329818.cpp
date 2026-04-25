// 2025년 1월 7일 23:11:04
// 맞았습니다!!
// 4808KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int> v(n + 1);
  for(int i = 2; i <= n; i++) {
    cin >> v[i];
  }
  vector<vector<int>> p(n + 1);
  for(int i = 2; i <= n; i++) {
    int t = i;
    while(t != 1) {
      p[i].push_back(t);
      t = v[t];
    }
  }
  for(int i = 0; i <= n; i++) {
    v[i] = p[i].size();
  }
  while(m--) {
    int a, b;
    cin >> a >> b;
    int t = 1;
    for(int i = 1; i <= min(v[a], v[b]); i++) {
      if(p[a][v[a] - i] == p[b][v[b] - i]) t = p[a][v[a] - i];
    }
    cout << t << '\n';
  }
}