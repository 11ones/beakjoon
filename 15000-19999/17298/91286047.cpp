// 2025년 3월 12일 20:56:45
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n), t(n, 1e6);
  for(auto &e : v) cin >> e;
  stack<int> s;
  for(auto i = n - 1; i >= 0; i--) {
    while(!s.empty() && s.top() < v[i]) {
      s.pop();
    }
    t[i] = (s.empty() ? -1 : s.top());
    s.push(v[i]);
  }
  for(auto e : t) {
    cout << e << ' ';
  }
}