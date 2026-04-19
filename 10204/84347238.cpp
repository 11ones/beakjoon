// 2024년 9월 25일 23:31:01
// 런타임 에러 (DoubleFree)
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
      v[stoi(a.substr(1)) - '1'].push_back(stoi(b.substr(1)) - '1');
      v[stoi(b.substr(1)) - '1'].push_back(stoi(a.substr(1)) - '1');
    }
    vector<bool> t(n);
    string s;
    cin >> s;
    for (auto e : v[stoi(s.substr(1)) - '1']) {
      for (auto ee : v[e]) {
        t[ee] = 1;
      }
    }
    t[stoi(s.substr(1)) - '1'] = 0;
    int x = 0;
    for (auto e : t) {
      x += e;
    }
    cout << "The number of supervillains in 2-hop neighborhood of " << s << " is " << x << '\n';
  }
}