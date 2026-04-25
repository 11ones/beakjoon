// 2025년 9월 25일 18:51:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
vector<set<int>> v;
vector<int> a, t, vst;
vector<string> s;
queue<int> z, q;
char L;
int N, l;
void run(int S, int E, int d) {
  char c = s[S][d];
  int n = S, p = S;
  vector<int> tx{c - 'a'};
  while (1) {
    while (n < E && s[n].length() > d && c == s[n][d]) {
      if (s[n].length() < d + 2) p = n + 1;
      ++n;
    }
    if (p < n - 1) {
      run(p, n, d + 1);
    }
    if (n >= E) break;
    p = n, c = s[n][d];
    tx.push_back(c - 'a');
  }
  for (int i = 0; i < tx.size(); ++i) {
    for (int j = i + 1; j < tx.size(); ++j) {
      v[tx[i]].insert(tx[j]);
      ++a[tx[j]];
    }
  }
}

bool cycle() {
  for (auto e : v[t.back()]) {
    for (auto f : t) {
      if (f == e) return 1;
    }
    if (!vst[e]) {
      t.push_back(e);
      vst[e] = 1;
      if (cycle()) return 1;
      t.pop_back();
    }
  }
  return 0;
}

void order() {
  string S;
  if (z.empty()) {
    cout << "IMPOSSIBLE";
    return;
  }
  for (int i = 0; i < l; ++i) {
    if (!vst[i]) {
      t.clear();
      t.push_back(i);
      if (cycle()) {
        cout << "IMPOSSIBLE";
        return;
      }
    }
  }
  if (z.size() > 1) {
    cout << "AMBIGUOUS";
    return;
  }
  while (!z.empty()) {
    S += z.front() + 'a';
    for (auto e : v[z.front()]) {
      --a[e];
      if (!a[e]) z.push(e);
    }
    z.pop();
    if (z.size() > 1) {
      cout << "AMBIGUOUS";
      return;
    }
  }
  if (S.size() != l)
    cout << "AMBIGUOUS";
  else
    cout << S;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> L >> N;
  l = L - 'a' + 1;
  v.resize(l, set<int>());
  vst.resize(l);
  s.resize(N);
  a.resize(l);
  for (auto &e : s) cin >> e;
  run(0, N, 0);
  for (int i = 0; i < l; ++i)
    if (!a[i]) z.push(i);
  order();
}