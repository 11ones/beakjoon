// 2024년 12월 2일 23:00:15
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n + 1, vector<int>());
  vector<int> f(n + 1), r;
  while(m--) {
    int x;
    cin >> x;
    vector<int> t(x);
    for(int i = 0; i < x; i++) {
      cin >> t[i];
    }
    for(int i = 1; i < x; i++) {
      v[t[i - 1]].push_back(t[i]);
      f[t[i]]++;
    }
  }
  queue<int> q;
  for(int i = 1; i <= n; i++) {
    if(!f[i]) {
      q.push(i);
    }
  }
  while(!q.empty()) {
    int tq = q.front();
    r.push_back(tq);
    q.pop();
    for(auto e : v[tq]) {
      if(f[e] < 1) {
        cout << 0;
        return 0;
      }
      f[e]--;
      if(!f[e]) {
        q.push(e);
      }
    }
  }
  int x = 0;
  for(auto e : f) {
    e += x;
  }
  if(!x) {
    cout << 0;
    return 0;
  }
  for(auto e : r) {
    cout << e << '\n';
  }
}