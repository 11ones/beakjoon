// 2024년 11월 5일 23:12:10
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b, k, x, y, r = 0, s = 0;
  cin >> n >> a >> b;
  vector<int> v;
  priority_queue<p, vector<p>, greater<p>> A, B;
  for (int i = 0; i < n; i++) {
    cin >> k >> x >> y;
    v.push_back(k);
    A.push({x, i});
    B.push({y, i});
    s += k;
  }
  A.push({1e9, -1});
  B.push({1e9, -1});
  while (1) {
    p ta = A.top(), tb = B.top();
    if(ta.first <= tb.first) {
      if(s > v[ta.second]) {
        s -= v[ta.second];
        r += v[ta.second] * ta.first;
        v[ta.second] = 0;
        A.pop();
      } else {
        r += v[ta.second] * s;
        break;
      }
    } else {
      if(s > v[tb.second]) {
        s -= v[tb.second];
        r += v[tb.second] * tb.first;
        v[tb.second] = 0;
        B.pop();
      } else {
        r += v[tb.second] * s;
        break;
      }
    }
  }
  cin >> k >> x >> y;
  cout << r;
}