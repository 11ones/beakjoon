// 2023년 12월 20일 16:41:08
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n;
  queue<int> q;
  stack<int> s;
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push(x);
  }
  int num = 1;
  while (!q.empty()) {
    while (!s.empty()) {
      if (s.top() == num) {
        num++;
        s.pop();
      } else {
        break;
      }
    }
    if (q.front() == num) {
      num++;
      q.pop();
    } else {
      s.push(q.front());
      q.pop();
    }
  }
  while (!s.empty()) {
    if (s.top() == num) {
      num++;
      s.pop();
    } else {
      break;
    }
  }

  if (num == n + 1)
    cout << "Nice";
  else
    cout << "Sad";
}