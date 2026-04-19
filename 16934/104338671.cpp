// 2026년 3월 26일 03:22:20
// 맞았습니다!!
// 44932KB
// 172ms
#include <bits/stdc++.h>
using namespace std;

struct S {
  map<char, S*> v;
  int x = 0;
};

int main() {
  cin.tie(0)->sync_with_stdio(0);

  S* s = new S();
  int N, f;
  cin >> N;
  map<string, int> m;
  while (N--) {
    f = 1;
    string t;
    cin >> t;
    auto x = s;
    if (++m[t] > 1) {
      cout << t << m[t] << '\n';
      for (auto e : t) x = x->v[e];
      continue;
    }
    for (int i = 0; i < t.size(); ++i) {
      if (x->v.find(t[i]) == x->v.end()) {
        x->v[t[i]] = new S;
        if (f) {
          cout << t.substr(0, i + 1) << '\n';
          f = 0;
        }
      }
      x = x->v[t[i]];
    }
    if (f) {
      cout << t << (x->x ? to_string(x->x++) : "") << '\n';
    }
  }
}