// 2024년 9월 10일 23:33:16
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
#define g3 get<3>
using namespace std;

typedef tuple<string, string, int, int> tp;

struct cmp {
  bool operator()(tp a, tp b) {
    if (g2(a) == g2(b)) return g3(a) < g3(b);
    return g2(a) > g2(b);
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int n;
    cin >> n;
    map<string, int> m, tm;
    vector<tp> v(n), t;
    for (int i = 0; i < n; i++) {
      cin >> g0(v[i]) >> g1(v[i]) >> g2(v[i]) >> g3(v[i]);
      m[g1(v[i])]++;
    }
    for(auto e : m) {
      tm[e.first] = 0;
    }
    sort(v.begin(), v.end(), cmp());
    if (n > 60) {
      for (int i = 0; i < n; i++) {
        if (t.size() >= 60) break;
        auto &tg1 = tm[g1(v[i])];
        if ((m[g1(v[i])] + 1) / 2 > tg1) {
          if (i < 10) {
            if (tg1 <= 3) {
              tg1++;
              t.push_back(v[i]);
            }
            continue;
          }
          if (i < 20) {
            if (tg1 <= 2) {
              tg1++;
              t.push_back(v[i]);
            }
            continue;
          }
          if (i < 30) {
            if (tg1 <= 1) {
              tg1++;
              t.push_back(v[i]);
            }
            continue;
          }
          if (!tg1) {
            tg1++;
            t.push_back(v[i]);
          }
        }
      }
      auto p = t.begin();
      for (auto e : v) {
        if (t.size() >= 60) break;

        if (e == *p) {
          p++;
        } else {
          t.push_back(e);
        }
      }
      sort(t.begin(), t.end(), cmp());
      cout << g0(t.back()) << '\n';
      continue;
    }
    cout << g0(v.back()) << '\n';
  }
}