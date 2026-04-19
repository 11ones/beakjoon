// 2025년 6월 24일 23:44:03
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, mx = 0;
  cin >> N;
  vector<array<int, 3>> v(N);
  for (int i = 0; i < N; ++i) {
    cin >> v[i][0] >> v[i][1];
    v[i][2] = i;
  }
  sort(v.begin(), v.end());
  vector<int> c(N);
  queue<int> q, t;
  map<int, vector<int>> m;
  for (int i = 0; i < N; ++i) {
    for(auto e : m) {
      if (e.first < v[i][0]) {
        for(auto f : e.second) {
          q.push(f);
        }
        t.push(e.first);
      }
    }
    while(!t.empty()) {
      m.erase(t.front());
      t.pop();
    }
    if(q.empty()) {
      q.push(++mx);
    }
    c[v[i][2]] = q.front();
    m[v[i][1]].push_back(q.front());
    q.pop();
  }
  cout << mx;
  for(int e : c) cout << '\n' << e;
}