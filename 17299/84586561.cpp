// 2024년 10월 1일 13:23:49
// 맞았습니다!!
// 13748KB
// 216ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> v(n), a(n);
  vector<int> m(1'000'001);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
  }
  stack<int> s;
  s.push(v[n - 1]);
  a[n - 1] = -1;
  for (int i = n - 2; i >= 0; i--) {
    bool chk = 1;
    while (!s.empty()) {
      if (m[s.top()] > m[v[i]]) {
        chk = 0;
        a[i] = s.top();
        break;
      }
      s.pop();
    }
    if (chk) {
      a[i] = -1;
    }
    s.push(v[i]);
  }
  for(auto e : a) {
    cout << e << " ";
  }
}