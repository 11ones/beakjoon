// 2025년 10월 5일 12:40:35
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int P, R, c, l;
  while (1) {
    l = c = 0;
    cin >> P;
    if(!P) return 0;
    cin >> R;
    vector<array<int, 3>> v(R);
    for(auto &e : v) {
      cin >> e[1] >> e[2] >> e[0];
    }
    sort(v.begin(), v.end());
    vector<int> t(P + 1);
    for(int i = 1; i <= P; ++i) {
      t[i] = i;
    }
    for(auto e : v) {
      if(t[e[1]] != t[e[2]]) {
        c += e[0];
        t[e[1]] = t[e[2]] = min(t[e[1]], t[e[2]]);
      }
    }
    cout << c << '\n';
  }
}