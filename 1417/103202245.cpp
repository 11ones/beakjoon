// 2026년 2월 23일 05:15:19
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x, y, c = 0;
  cin >> N >> x;
  priority_queue<int> q;
  while (--N) {
    cin >> y;
    q.push(y);
  }
  while (1) {
    if (q.empty() || q.top() < x) break;
    y = q.top();
    q.pop();
    q.push(--y);
    ++x, ++c;
  }
  cout << c;
}