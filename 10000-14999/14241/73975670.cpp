// 2024년 2월 25일 16:14:10
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  priority_queue<int, vector<int>, greater<int>> q;
  int n, x, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push(x);
  }
  while (1) {
    int a = q.top();
    q.pop();
    int b = q.top();
    q.pop();
    ans += a * b;
    if (q.empty())
      break;
    q.push(a + b);
  }
  cout << ans;
}