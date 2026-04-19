// 2024년 3월 19일 23:59:24
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  deque<int> d;
  for (int i = 1; i <= n; i++) {
    d.push_back(i);
  }
  queue<int> q;
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    q.push(x);
  }
  int c = 0;
  for (int i = 0; i < m; i++) {
    int t = 0;
    while (d.front() != q.front()) {
      d.push_back(d.front());
      d.pop_front();
      t++;
    }
    d.pop_front();
    q.pop();
    c += min(t, int(d.size() + 1 - t));
  }
  cout << c;
}