// 2026년 4월 10일 03:35:36
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M;
  cin >> N >> M;
  vector<string> u(N);
  map<string, int> m;
  vector<vector<int>> v(N, vector<int>());
  vector<int> t(N);
  set<int> s;
  for (int i = 0; i < N; ++i) {
    cin >> u[i];
    m[u[i]] = i;

    s.insert(i);
  }
  string s1, s2;
  while (M--) {
    cin >> s1 >> s2;
    auto &t1 = ++t[m[s1]];
    auto &t2 = ++t[m[s2]];
    v[m[s1]].push_back(m[s2]);
    v[m[s2]].push_back(m[s1]);
    if(t1 > 2 || t2 > 2 || t1 + t2 == 4) {
      cout << "EI SAA";
      return 0;
    }
  }
  cout << "SAAB\n";
  for (int i = 0; i < N; ++i) {
    if (t[i] == 1) {
      cout << u[i] << " ";
      s.erase(i);
      t[i] = 0;
      queue<int> q;
      q.push(i);
      while(!q.empty()) {
        auto a = q.front();
        q.pop();
        for (auto e : v[a]) {
          if (t[e]) {
            q.push(e);
            cout << u[e] << " ";
            s.erase(e);
            t[e] = 0;
          }
        }
      }
    }
  }
  for (auto e : s) cout << u[e] << " ";
}