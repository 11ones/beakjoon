// 2024년 9월 25일 23:29:24
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int n, e;
    cin >> n >> e;
    vector<int> *v = new vector<int>[n];
    for (int i = 0; i < e; i++) {
      string a, b;
      cin >> a >> b;
      v[a[1] - '1'].push_back(b[1] - '1');
      v[b[1] - '1'].push_back(a[1] - '1');
    }
    vector<bool> t(n);
    string s;
    cin >> s;
    for (auto e : v[s[1] - '1']) {
      for (auto ee : v[e]) {
        t[ee] = 1;
      }
    }
    t[s[1] - '1'] = 0;
    int x = 0;
    for (auto e : t) {
      x += e;
    }
    cout << "The number of supervillains in 2-hop neighborhood of " << s << " is " << x << '\n';
  }
}