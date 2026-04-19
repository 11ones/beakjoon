// 2024년 7월 13일 13:46:11
// 맞았습니다!!
// 3688KB
// 52ms
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
typedef pair<int, int> p;



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  priority_queue<p> q;
  int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push({x, n - i});
  }
  for (int i = 0; i < k; i++) {
    auto t = q.top();
    q.pop();
    if (t.first > 100) {
      t.first -= 100;
      q.push(t);
      continue;
    }
    cout << "impossible";
    return 0;
  }
  vector<int> v(n);
  while(!q.empty()) {
    v[n - q.top().second] = q.top().first;
    q.pop();
  }
  
  for (auto e : v) {
    cout << e << ' ';
  }
}