// 2024년 8월 20일 23:08:35
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    bool chk = 1;
    int n;
    cin >> n;
    vector<p> v(n);
    p h, r;
    cin >> h.first >> h.second;
    for (int i = 0; i < n; i++) {
      cin >> v[i].first >> v[i].second;
    }
    cin >> r.first >> r.second;
    vector<bool> vst(n);
    queue<p> q;
    q.push(h);
    while (!q.empty()) {
      int tf = q.front().first, ts = q.front().second;
      q.pop();
      if (abs(tf - r.first) + abs(ts - r.second) <= 1000) {
        chk = 0;
        break;
      }
      for (int i = 0; i < n; i++) {
        auto &vf = v[i].first, &vs = v[i].second;
        if (vst[i]) {
          continue;
        }
        if (abs(vf - tf) + abs(vs - ts) <= 1000) {
          vst[i] = 1;
          q.push({vf, vs});
        }
      }
    }
    cout << (chk ? "sad\n" : "happy\n");
  }
}