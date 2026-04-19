// 2023년 12월 20일 16:29:51
// 출력 초과
// KB
// ms
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
  while (!(q.empty() && s.empty())) {
    if (!s.empty() && s.top() == num) {
      num++;
      s.pop();
    }
    if (!q.empty()) {
      if (q.front() == num) {
        num++;
        q.pop();
      } else {
        s.push(q.front());
        q.pop();
      }
    }
    cout << num << " ";
    if (!s.empty())
      cout << s.size() << " " << s.top() << " ";
    if (!q.empty())
      cout << q.size() << " " << q.front();
    cout << endl;
  }

  if (num == n + 1)
    cout << "Nice";
  else
    cout << "Sad";
}