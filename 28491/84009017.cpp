// 2024년 9월 18일 15:32:13
// 100점
// 3196KB
// 40ms
#include <bits/stdc++.h>
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
using namespace std;

typedef tuple<int, int, bool> tu;
bool cmp(tu a, tu b) { return g1(a) > g1(b); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<tu> v(n);
  for (int i = 0; i < n; i++) cin >> g0(v[i]) >> g1(v[i]);

  sort(v.begin(), v.end(), greater<>());
  int m = g1(v[0]);
  for (int i = 1; i < n; i++) {
    if (g1(v[i]) <= m) {
      g2(v[i]) = 1;
      continue;
    }
    m = max(m, g1(v[i]));
  }
  sort(v.begin(), v.end(), cmp);
  m = g0(v[0]);
  for (int i = 1; i < n; i++) {
    if (g0(v[i]) <= m) {
      g2(v[i]) = 1;
      continue;
    }
    m = max(m, g0(v[i]));
  }
  int c = 0;
  for (int i = 0; i < n; i++)
    if (!g2(v[i])) c++;
  cout << c;
}