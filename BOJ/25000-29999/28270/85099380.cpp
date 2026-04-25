// 2024년 10월 12일 13:58:26
// 1점
// 2020KB
// 124ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int c;
  cin >> c;
  stack<int> s;
  while (c--) {
    int x;
    cin >> x;
    if (x > s.size() + 1) {
      cout << -1;
      while (c--) {
        cin >> x;
      }
      return 0;
    }
    if (x <= s.size()) {
      while (x < s.size()) {
        s.pop();
      }
    } else {
      s.push(0);
    }
    s.top()++;
    cout << s.top() << ' ';
  }
}