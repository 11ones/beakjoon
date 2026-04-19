// 2026년 4월 8일 03:12:25
// 맞았습니다!!
// 2024KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  while (T--) {
    set<int> s;
    int N;
    cin >> N;
    vector<int> v(N), u, w;
    for (int &e : v) cin >> e;
    cin >> N;
    u.resize(N);
    for (int &e : u) cin >> e;
    cin >> N;
    w.resize(N);
    for (int &e : w) cin >> e;
    for (int e : v) for (int f : u) for (int g : w) {
      int t = e + f + g;
      while(t) {
        if (t % 10 != 5 && t % 10 != 8) goto E;
        t /= 10;
      }
      s.insert(e + f + g);
    E:;
    }
    cout << s.size() << '\n';
  }
}