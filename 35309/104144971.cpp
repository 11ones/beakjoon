// 2026년 3월 21일 05:33:26
// 틀렸습니다
// KB
// ms
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
          goto E;
        }
      }
    }
    cout << "YES\n";
    E:;
  }
}