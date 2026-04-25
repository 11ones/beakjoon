// 2026년 3월 21일 05:45:15
// 맞았습니다!!
// 2548KB
// 84ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int T, N, x;
  cin >> T;
  while (T--) {
    cin >> N;
    stack<int> u;
    while (N--) {
      cin >> x;
      if (x == 1) u.push(1);
      else {
        while (!u.empty() && u.top() != x - 1) u.pop();
        if (!u.empty() && u.top() == x - 1) ++u.top();
        else {
          cout << "NO\n";
          while (N--) cin >> x;
          goto E;
        }
      }
    }
    cout << "YES\n";
    E:;
  }
}