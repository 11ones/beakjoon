// 2025년 3월 19일 19:44:32
// 맞았습니다!!
// 2916KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
  cin >> n;
  priority_queue<int> q;
  while (n--) {
    cin >> t;
    if (t) {
      q.push(t);
    } else {
      if (q.empty()) {
        cout << 0 << '\n';
      } else {
        cout << q.top() << '\n';
        q.pop();
      }
    }
  }
}