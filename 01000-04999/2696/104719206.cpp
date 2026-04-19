// 2026년 4월 5일 05:45:35
// 맞았습니다!!
// 2156KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T, N, x, c;
  cin >> T;
  while (T--) {
    c = 1;
    cin >> N;
    cout << (N + 1) / 2 << '\n';
    priority_queue<int> l;
    priority_queue<int, vector<int>, greater<>> r;
    int m;
    cin >> m;
    cout << m << " ";
    while (--N) {
      cin >> x;
      if (x >= m) {
        r.push(x);
      } else {
        l.push(x);
      }
      if (N % 2) {
        while (l.size() > r.size()) {
          r.push(m);
          m = l.top();
          l.pop();
        }
        while (l.size() < r.size()) {
          l.push(m);
          m = r.top();
          r.pop();
        }
        cout << m << " ";
        ++c;
        if (!(c % 10)) cout << '\n';
      }
    }
    if (c % 10) cout << '\n';
  }
}