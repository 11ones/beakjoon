// 2025년 4월 8일 19:25:55
// 틀렸습니다
// KB
// ms
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
    auto t = q.top(), u = q.top();
    if(q.top()[1] == x) {
      q.pop();
      if(q.empty()) {
        cout << "-1";
        return 0;
      }
      t = q.top();
      q.push(u);
    }
    q.pop();
    v.push_back(t[1]);
    x = t[1];
    if(--t[0]) q.push(t);
  }
  for(auto e : v) {
    cout << e << " ";
  }
}