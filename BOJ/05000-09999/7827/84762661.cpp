// 2024년 10월 5일 00:09:20
// 맞았습니다!!
// 2720KB
// 284ms
#include <bits/stdc++.h>
using namespace std;

int n, m;
int run(vector<int> *v, vector<bool> &t, int x) {
  int cnt = 1;
  for (auto e : v[x]) {
    if (!t[e]) {
      t[e] = 1;
      cnt += run(v, t, e);
    }
  }
  return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    cin >> n >> m;
    vector<int> *v = new vector<int>[n + 1];
    for (int i = 0; i < m; i++) {
      int a, b;
      cin >> a >> b;
      v[a].push_back(b);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        vector<bool> t(n + 1);
        t[i] = 1;
        cnt += run(v, t, i) - 1;
    }
    cout << cnt << '\n';
  }
}