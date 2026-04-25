// 2025년 4월 8일 20:05:39
// 100점
// 10340KB
// 76ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k, x;
  cin >> n >> k;
  vector<int> v;
  priority_queue<array<int, 2>> q;
  for(int i = 1; i <= k; ++i) {
    cin >> x;
    q.push({x, i});
  }
  x = -1;
  while(!q.empty() && v.size() < n) {
    array<int, 2> t = q.top(), u{0, 0};
    if(t[1] == x) {
      u = t;
      q.pop();
      if(q.empty()) {
        cout << "-1";
        return 0;
      }
      t = q.top();
    }
    q.pop();
    v.push_back(t[1]);
    x = t[1];
    if(--t[0]) q.push(t);
    if(u[1]) q.push(u);
  }
  for(auto e : v) {
    cout << e << " ";
  }
}