// 2026년 3월 21일 05:27:27
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int T, N;
vector<int> v, u;

bool r(int p) {
  if (p == N) return 1;
  bool f;
  if (v[p] == 1) {
    u.push_back(1);
    f = r(p + 1);
    if (f) return f;
    return 0;
  }
  if (!u.empty() && u.back() + 1 == v[p]) {
    ++*--u.end();
    f = r(p + 1);
    if (f) return f;
    --*--u.end();
  }
  if (u.size() > 1 && u[u.size() - 2] + 1 == v[p]) {
    int t = u.back();
    u.pop_back();
    ++*--u.end();
    f = r(p + 1);
    if (f) return f;
    u.push_back(t);
    --*--u.end();
  }
  return 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> T;
  while (T--) {
    cin >> N;
    v.resize(N);
    for (int &e : v) cin >> e;
    cout << (r(0) ? "YES\n" : "NO\n");
    v.clear(), u.clear();
  }
}