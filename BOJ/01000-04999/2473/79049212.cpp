// 2024년 5월 30일 23:37:37
// 시간 초과
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
  vector<int> p, m;
  vector<pair<int, int>> p1, m1;
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
      m1.push_back({m[i] + m[j], i * ml + j});
    }
  }
  for (int i = 1; i < pl; i++) {
    for (int j = 0; j < i; j++) {
      p1.push_back({p[i] + p[j], j * pl + i});
    }
  }
  int m1l = m1.size(), p1l = p1.size();
  sort(m1.begin(), m1.end());
  sort(p1.begin(), p1.end());
  
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
  if (ml > 1) {
    for (auto e : p) {
      int t = upper_bound(m1.begin(), m1.end(), make_pair(-e, 0)) - m1.begin();
      long long t1 = abs(m1[t].first + e), t2 = t1;
      if (t > 0) {
        t2 = abs(m1[t - 1].first + e);
      }
      if (mn < t1 && mn < t2) {
        continue;
      }

      c = e;
      if (t < m1l && t1 <= t2) {
        mn = t1;
        b = m[m1[t].second / ml];
        a = m[m1[t].second % ml];
      } else if (t > 0) {
        mn = t2;
        b = m[m1[t - 1].second / ml];
        a = m[m1[t - 1].second % ml];
      }
    }
  }
  if (pl > 1) {
    for (auto e : m) {
      int t =
          upper_bound(p1.rbegin(), p1.rend(), make_pair(-e, 0)) - p1.rbegin();
      long long t1 = abs(p1[t].first + e), t2 = t1;
      if (t > 0) {
        t2 = abs(p1[t - 1].first + e);
      }
      if (mn < t1 && mn < t2) {
        continue;
      }

      a = e;
      if (t < p1l && t1 <= t2) {
        mn = t1;
        b = p[p1[t].second / pl];
        c = p[p1[t].second % pl];
      } else if (t > 0) {
        mn = t2;
        b = p[p1[t - 1].second / pl];
        c = p[p1[t - 1].second % pl];
      }
    }
  }
  cout << a << " " << b << " " << c;
}