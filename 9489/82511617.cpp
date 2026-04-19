// 2024년 8월 15일 15:22:01
// 맞았습니다!!
// 2292KB
// 440ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (1) {
    int n, k;
    cin >> n >> k;
    if (!(n + k)) {
      return 0;
    }
    vector<int> v;
    map<int, vector<int>> m;
    map<int, int> c;
    int x, t, p = -1;
    cin >> x;
    t = x;
    v.push_back(x);
    for(int i = 1; i < n; i++) {
      cin >> x;
      if(t + 1 != x) {
        p++;
      }
      m[v[p]].push_back(x);
      c[x] = v[p];
      v.push_back(x);
      t = x;
    }
    int cnt = 0;
    if(c[k] != v[0]) {
      for(auto e : m[c[c[k]]]) {
        if(e == c[k]) {
          continue;
        }
        cnt += m[e].size();
      }
    }
    cout << cnt << '\n';
  }
}