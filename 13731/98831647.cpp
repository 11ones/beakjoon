// 2025년 9월 23일 23:57:48
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
vector<set<int>> v;
vector<int> a;
vector<string> s;
queue<int> z, tz, q;
vector<int> vst, t;
char L;
int N, l;
void run(int S, int E, int d) {
  char c = s[S][d];
  int n = S + 1, p = S;
  vector<int> tx{c - 'a'};
  while (1) {
    while (n < E && s[n].length() > d && c == s[n][d]) {
      ++n;
      if(s[n].length() < d) p = n;
    }
    if (n >= E) break;
    if (p != n - 1) {
      run(p, n, d + 1);
    }
    p = n, c = s[n][d];
    tx.push_back(s[n][d] - 'a');
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
    t.push_back(e);
    if (cycle()) return 1;
    t.pop_back();
  }
  return 0;
}

void order() {
  string S;
  if (z.empty()) {
    cout << "IMPOSSIBLE";
    return;
  }
  tz = z;
  while (!tz.empty()) {
    t.clear();
    t.push_back(tz.empty());
    tz.pop();
    if (cycle()) {
      cout << "IMPOSSIBLE";
      return;
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
      if(!a[e]) z.push(e);
    }
    z.pop();
    if (z.size() > 1) {
      cout << "AMBIGUOUS";
      return;
    }
  }
  cout << S;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> L >> N;
  l = L - 'a' + 1;
  v.resize(l, set<int>());
  s.resize(N);
  a.resize(l);
  for (auto &e : s) cin >> e;
  run(0, N, 0);
  for (int i = 0; i < N; ++i)
    if (!a[i]) z.push(i);
  order();
}