// 2024년 5월 12일 14:08:49
// 맞았습니다!!
// 18344KB
// 404ms
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x, m, t = 0;
  cin >> n;
  priority_queue<p, vector<p>, greater<p>> q;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> x;
    q.push({x, i});
  }
  m = q.top().first;
  while(!q.empty()) {
    p y = q.top();
    if(m < y.first) {
      m = y.first;
      t++;
    }
    v[y.second] = t;
    q.pop();
  }
  for(int e : v)
    cout << e << " ";
}