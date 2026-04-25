// 2024년 11월 5일 23:40:51
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef tuple<int, int, int> T;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b, k, x, y, r = 0, s = 0;
  cin >> n >> a >> b;
  vector<int> v;
  priority_queue<T, vector<T>, greater<T>> q;
  for (int i = 0; i < n; i++) {
    cin >> k >> x >> y;
    v.push_back(k);
    q.push({x, i, 0});
    q.push({y, i, 1});
    s += k;
  }
  while (1) {
    int t0 = get<0>(q.top());
    int& t1 = v[get<1>(q.top())];
    int t2 = get<2>(q.top());
    if (t2) {
      if (s >= t1 && b >= t1) {
        s -= t1;
        b -= t1;
        r += t1 * t0;
        t1 = 0;
        q.pop();
      } else {
        s -= b;
        t1 -= b;
        r += b * t0;
        q.pop();
      }
    } else {
      if (s >= t1 && a >= t1) {
        s -= t1;
        a -= t1;
        r += t1 * t0;
        t1 = 0;
        q.pop();
      } else {
        s -= a;
        t1 -= a;
        r += a * t0;
        q.pop();
      }
    }
    if (!s) {
      break;
    }
  }
  cin >> k >> x >> y;
  cout << r;
}