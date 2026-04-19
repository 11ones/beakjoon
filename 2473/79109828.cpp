// 2024년 6월 1일 16:48:51
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll sum(vector<ll> v) { return abs(v[0] + v[1] + v[2]); }

int main() {
  int n;
  cin >> n;
  vector<ll> p, m;
  vector<pair<ll, int>> p1, m1;
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

  vector<ll> v(3);
  ll mn = 1e12;
  if (ml > 2) {
    v = {m[ml - 3], m[ml - 2], m[ml - 1]};
    mn = sum(v);
  }
  if (pl > 2 && p[0] + p[1] + p[2] < mn) {
    v = {p[0], p[1], p[2]};
    mn = sum(v);
  }
  if (ml > 1) {
    for (int i = 0; i < pl; i++) {
      for (int j = ml - 1; j > 0; j--) {
        ll pm = p[i] + m[j];
        int t = m.rbegin() - upper_bound(m.rbegin() - (ml - j), m.rend(), -abs(pm));
        ll t1 = abs(pm + m[t]), t2 = t1;
        if(t == pl) {
          t1 = abs(pm + m[t - 1]);
          t2 = t1;
        }
        if (t > 0) {
          t2 = abs(pm + m[t - 1]);
        }
        if (mn < t1 && mn < t2) {
          continue;
        }
        v = {m[j], 0, p[i]};
        if (t1 <= t2) {
          mn = t1;
          v[1] = m[t];
        } else {
          mn = t2;
          v[1] = m[t - 1];
        }
      }
    }
  }
  if (pl > 1) {
    for (int i = ml - 1; i >= 0; i--) {
      for (int j = 0; j < pl - 1; j++) {
        ll pm = m[i] + p[j];
        int t = upper_bound(p.begin() + j + 1, p.end(), abs(pm)) - p.begin();
        ll t1 = abs(pm + p[t]), t2 = t1;
        if(t == pl) {
          t1 = abs(pm + p[t - 1]);
          t2 = t1;
        }
        if (t > 0) {
          t2 = abs(pm + p[t - 1]);
        }
        if (mn < t1 && mn < t2) {
          continue;
        }
        v = {m[i], p[j], 0};
        if (t1 <= t2) {
          mn = t1;
          v[2] = p[t];
        } else {
          mn = t2;
          v[2] = p[t - 1];
        }
      }
    }
  }
  for (auto e : v) {
    cout << e << " ";
  }
}