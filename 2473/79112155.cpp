// 2024년 6월 1일 17:39:07
// 맞았습니다!!
// 2024KB
// 216ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll sum(vector<ll> v) { return abs(v[0] + v[1] + v[2]); }

int main() {
  int n;
  cin >> n;
  vector<ll> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  sort(p.begin(), p.end());
  vector<ll> v(3);
  ll mn = 1e12;

  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      ll pm = p[i] + p[j];
      int t = upper_bound(p.begin() + j + 1, p.end(), -pm) - p.begin();
      ll t1 = abs(pm + p[t]), t2 = t1;
      if (t > j + 1) {
        t2 = abs(pm + p[t - 1]);
      }
      if (mn < t1 && mn < t2) {
        continue;
      }
      v = {p[i], p[j], 0};
      if (t1 <= t2 && t != n) {
        mn = t1;
        v[2] = p[t];
      } else {
        mn = t2;
        v[2] = p[t - 1];
      }
    }
  }
  for (auto e : v) {
    cout << e << " ";
  }
}