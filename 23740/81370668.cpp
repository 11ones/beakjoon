// 2024년 7월 21일 15:13:12
// 맞았습니다!!
// 8988KB
// 452ms
#include <algorithm>
#include <iostream>
#include <vector>
#include <tuple>
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
using namespace std;
typedef tuple<int, int, int> tp;

struct cmp {
  bool operator()(tp a, tp b) {
    if (g0(a) == g0(b)) {
      return g1(a) > g1(b);
    }
    return g0(a) < g0(b);
  }
};

int main() {
  int n, a, b, c;
  cin >> n;
  vector<tp> v(n), ans;
  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    v[i] = {a, b, c};
  }
  sort(v.begin(), v.end(), cmp());
  a = -1;
  for(auto e : v) {
    if (a == -1) {
      a = g0(e);
      b = g1(e);
      c = g2(e);
      continue;
    }
    if (b < g0(e)) {
      ans.push_back({a, b, c});
      a = g0(e);
      b = g1(e);
      c = g2(e);
      continue;
    }
    b = max(b, g1(e));
    c = min(c, g2(e));
  }
  ans.push_back({a, b, c});
  cout << ans.size() << '\n';
  for(auto e : ans) {
    cout << g0(e) << ' ' << g1(e) << " " << g2(e) << '\n';
  }
}