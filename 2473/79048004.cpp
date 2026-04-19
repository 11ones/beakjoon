// 2024년 5월 30일 23:08:15
// 런타임 에러 (Segfault)
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> p, m, p1, m1;
  vector<pair<int, int>> p2, m2;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x > 0)
      p.push_back(x);
    else
      m.push_back(x);
  }
  int ml = m.size(), pl = p.size();
  sort(m.begin(), m.end());
  sort(p.begin(), p.end());
  for (int i = 1; i < ml; i++) {
    for (int j = 0; j < i; j++) {
      m1.push_back(m[i] + m[j]);
      m2.push_back({m[i] + m[j], i * ml + j});
    }
  }
  for (int i = 1; i < pl; i++) {
    for (int j = 0; j < i; j++) {
      p1.push_back(p[i] + p[j]);
      p2.push_back({p[i] + p[j], j * pl + i});
    }
  }
  int m1l = m1.size(), p1l = p1.size();
  sort(m1.begin(), m1.end());
  sort(p1.begin(), p1.end());
  sort(m2.begin(), m2.end());
  sort(p2.begin(), p2.end());

  if (pl == 0 || ml == 0) {
    if (pl == 0) {
      for (int i = 0; i < 3; i++) {
        cout << m[i] << " ";
      }
      return 0;
    }
    for (int i = 0; i < 3; i++) {
      cout << p[i] << " ";
    }
    return 0;
  }
  long long a, b, c, mn = 1e12;
  if (ml > 2) {
    a = m[ml - 3];
    b = m[ml - 2];
    c = m[ml - 1];
    mn = -(a + b + c);
  }
  if (pl > 2 && p[0] + p[1] + p[2] < mn) {
    a = p[0];
    b = p[1];
    c = p[2];
  }
  for (auto e : p) {
    int t = upper_bound(m1.begin(), m1.end(), -e) - m1.begin() - 1;
    long long t1 = abs(m2[t].first + e), t2 = abs(m2[t - 1].first + e);
    if (mn < t1 && mn < t2) {
      continue;
    }

    c = e;
    if (t > 0 && t < m1l && t1 < t2) {
      mn = t1;
      b = m[m2[t].second / ml];
      a = m[m2[t].second % ml];
    } else {
      mn = t2;
      b = m[m2[t - 1].second / ml];
      a = m[m2[t - 1].second % ml];
    }
  }
  for (auto e : m) {
    int t = p1.rbegin() - upper_bound(p1.rbegin(), p1.rend(), -e);
    long long t1 = abs(p2[t].first + e), t2 = abs(p2[t - 1].first + e);
    if (mn < t1 && mn < t2) {
      continue;
    }

    a = e;
    if (t > 0 && t < p1l && t1 < t2) {
      mn = t1;
      b = p[p2[t].second / pl];
      c = p[p2[t].second % pl];
    } else {
      mn = t2;
      b = p[p2[t - 1].second / pl];
      c = p[p2[t - 1].second % pl];
    }
  }

  cout << a << " " << b << " " << c;
}