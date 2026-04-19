// 2024년 11월 21일 23:13:51
// 맞았습니다!!
// 4684KB
// 132ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int U, V, M;
    cin >> U >> V >> M;
    vector<string> u(U), v(V);
    unordered_map<string, vector<string>> m;
    map<string, int> t;
    for (int i = 0; i < U; i++) {
      cin >> u[i];
      t[u[i]]++;
    }
    for (int i = 0; i < V; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < M; i++) {
      string a, b;
      cin >> a >> b;
      m[a].push_back(b);
    }
    queue<string> q;
    for (auto e : u) {
      q.push(e);
    }
    while (!q.empty()) {
      for (auto &e : m[q.front()]) {
        if (!t[e]) {
          t[e]++;
          q.push(e);
        }
      }
      q.pop();
    }
    vector<string> c;
    auto f = v.begin();
    for (auto e : t) {
      while (e.first > *f) {
        f++;
        if (f == v.end()) {
          break;
        }
      }
      if (f == v.end()) {
        break;
      }
      if (e.first == *f && e.second) {
        c.push_back(*f);
      }
    }
    for (auto e : c) {
      cout << e << " ";
    }
    cout << '\n';
  }
}