// 2024년 8월 15일 14:57:57
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
using namespace std;

typedef tuple<int, int, int> u;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (1) {
    int n, k;
    cin >> n >> k;
    if (!(n + k)) {
      return 0;
    }
    int x, t;
    cin >> x;
    t = x;
    vector<u> v;
    v.push_back({0, 0, x});
    int p = -1;
    auto kp = v.front();
    for (int o = 1; o < n; o++) {
      cin >> x;
      if (x != t + 1) {
        p++;
      }
      v.push_back({g0(v[p]) + 1, g2(v[p]), x});
      if (x == k) {
        kp = v.back();
      }
      t = x;
    }
    int cnt = 0;
    for(auto e : v) {
      if(g0(kp) == g0(e) && g1(kp) != g1(e)) {
        cnt++;
      }
    }
    cout << cnt << '\n';
  }
}