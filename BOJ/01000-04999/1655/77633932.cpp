// 2024년 4월 29일 23:08:06
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <list>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x;
  cin >> n;
  list<int> l;
  priority_queue<int, vector<int>, greater<int>> q;
  for (int i = 0; i < n; i++) {
    cin >> x;
    auto it = lower_bound(l.begin(), l.end(), x);
    if (it == l.end()) {
      q.push(x);
      if (!(i % 2)) {
        l.push_back(q.top());
        q.pop();
      }
    } else {
      l.insert(it, x);
    }
    cout << l.back() << '\n';
  }
}