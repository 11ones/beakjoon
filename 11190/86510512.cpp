// 2024년 11월 16일 16:01:23
// 맞았습니다!!
// 3756KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  array<vector<int>, 10001> v;
  array<int, 10001> a{};
  while (m--) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  for (int i = 1; i <= n; i++) {
    if(v[i].empty()) {
      cout << "Impossible";
      return 0;
    }
    if(a[i]) continue;
    queue<int> q;
    q.push(i);
    a[i] = 1;
    while (!q.empty()) {
      int t = q.front();
      q.pop();
      for(auto e : v[t]) {
        if(a[e]) continue;
        a[e] = 3 - a[t];
        q.push(e);
      }
    }
  }
  for(int i = 1; i <= n; i++) {
    cout << (a[i] == 1 ? "pub " : "house ");
  }
}